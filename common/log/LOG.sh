#!/bin/bash
#######################################################
# Name		: LOG.sh
# Version	: 1.0.0
# Function	: shell for log
# Author	: zhouhailin
# Organization	: https://github.com/zhouhailin/BashShell
# Create Date	: 2017/10/20
# Description	: shell script of log, can output console or file
#######################################################


# Shell Environment
# version
LOG_VERSION=1.0.0
#
LOG_BINARY_NAME=LOG

# Variable Name
#LOG_CONSOLE_OFF
#LOG_SHELL_NAME
#LOG_FILE_NAME
#LOG_KEEP_FILE_NUMS=10

# Private Variable Name
# LOG_PRIVATE_CURRENT_DATE_STRING
# LOG_PRIVATE_HISTORY_DATE_STRING

# font color
LOG_FONT_BLACK=30 
LOG_FONT_RED=31
LOG_FONT_GREEN=32
LOG_FONT_YELLOW=33
LOG_FONT_BLUE=34
LOG_FONT_MAGENTA=35	#紫色 
LOG_FONT_CYAN=36	#深绿 
LOG_FONT_WHITE=37


# log out
log_out(){
	# whether append shell name to output log content
	if [ -z $LOG_SHELL_NAME ];then
		log_text="$(date "+%Y-%m-%d") $(date "+%H:%M:%S") "$@
	else
		log_text="$(date "+%Y-%m-%d") $(date "+%H:%M:%S") [$SHELL_NAME] "$@
	fi

	# output file or console
	if [ -z $LOG_FILE_NAME ];then
		log_console $log_text
	else
		if [ -f $LOG_FILE_NAME ];then
			if [ -w $LOG_FILE_NAME ];then
				log_file $log_text
			else
				log_console $log_text
			fi
		elif [ -d $LOG_FILE_NAME ];then
			log_console $log_text
		else
			touch $LOG_FILE_NAME > /dev/null 2>&1
			if [ $? -eq 0 ];then
				log_file $log_text
			else
				log_console $log_text
			fi
		fi
	fi
}

check_history_log_file(){
	if [ ! -z LOG_KEEP_FILE_NUMS ];then
		# LOG_KEEP_FILE_NUMS is set by user
		if [ "$LOG_KEEP_FILE_NUMS" -gt 0 ] 2>/dev/null ;then
			//TODO
			echo "" > /dev/null
		fi
	fi
}

log_file(){
	check_history_log_file	
	echo $@ >> $LOG_FILE_NAME 2>&1
}

log_console(){
	if [ -z $LOG_CONSOLE_OFF ];then
		log_console_out $@
	elif [ $LOG_CONSOLE_OFF != "TRUE" ];then
		log_console_out $@
	fi
}

log_console_out(){
	case $levelName in
        TRACE|trace)
		echo -e "\033[1;"$LOG_FONT_BLUE"m$@\033[0m"
            ;;
        DEBUG|debug)
       		echo -e "\033[1;"$LOG_FONT_CYAN"m$@\033[0m"
            ;;
        INFO|info)
		echo -e "\033[1;"$LOG_FONT_GREEN"m$@\033[0m"
            ;;
        WARN|warn)
		echo -e "\033[1;"$LOG_FONT_MAGENTA"m$@\033[0m"
            ;;
        ERROR|error)
            	echo -e "\033[1;"$LOG_FONT_RED"m$@\033[0m"
            ;;
		*)
			echo "unknow."
	esac
}

# trace
log_trace(){
	log_out [TRACE] - $@
}

# debug
log_debug(){
	log_out [DEBUG] - $@
}

# info
log_info(){
	log_out [ INFO] - $@
}

# warn
log_warn(){
	log_out [ WARN] - $@
}

# error
log_error(){
	log_out [ERROR] - $@
}

# usage
log_usage(){
	echo "Usage($LOG_VERSION): $LOG_BINARY_NAME [OPTION] [TEXT]"
	echo "OPTION argument : TRACE, DEBUG, INFO, WARN, ERROR"
	echo "TEXT   argument : output text."
	echo ""
	echo "export LOG_FILE_NAME=/tmp/log 	# the log will output to file /tmp/log"
	echo "export LOG_CONSOLE_OFF=\"TRUE\" 	# console log disappear."
	echo "export LOG_SHELL_NAME=\"LogTest\"	# you can have a try."
	echo ""
	echo "Example : $LOG_BINARY_NAME {TRACE|DEBUG|INFO|WARN|ERROR} output text"
	echo "          $LOG_BINARY_NAME INFO you are beautiful girls!"
	echo ""
}



main(){
	levelName=$1
	shift
    case $levelName in
        TRACE|trace)
            log_trace $@
            ;;
        DEBUG|debug)
            log_debug $@
            ;;
        INFO|info)
            log_info $@
            ;;
        WARN|warn)
            log_warn $@
            ;;
        ERROR|error)
            log_error $@
            ;;
        *)
            log_usage;
    esac
}

# Exec
main $@ 

