#if 0
	shc Version 3.8.9, Generic Script Compiler
	Copyright (c) 1994-2012 Francisco Rosales <frosal@fi.upm.es>

	shc -f LOG.sh 
#endif

static  char data [] = 
#define      lsto_z	1
#define      lsto	((&data[0]))
	"\132"
#define      tst1_z	22
#define      tst1	((&data[6]))
	"\231\126\304\021\017\016\235\327\006\000\107\220\365\334\212\150"
	"\344\007\076\026\241\164\003\226\000\233\207\334\264\164\233\310"
#define      chk1_z	22
#define      chk1	((&data[33]))
	"\222\317\210\314\114\233\351\116\163\376\214\372\323\016\161\047"
	"\167\243\143\224\120\233\360\115\347\112"
#define      date_z	1
#define      date	((&data[59]))
	"\020"
#define      opts_z	1
#define      opts	((&data[60]))
	"\246"
#define      text_z	3562
#define      text	((&data[720]))
	"\263\216\165\260\203\017\007\107\041\026\044\325\212\300\236\003"
	"\320\141\363\036\110\076\115\367\374\024\215\205\334\112\204\220"
	"\331\372\100\134\011\107\244\052\136\310\377\351\210\236\354\131"
	"\377\340\167\107\037\305\076\033\332\314\241\266\027\045\106\360"
	"\037\207\115\051\317\361\123\055\272\123\027\103\361\004\234\360"
	"\344\023\070\004\331\167\037\263\103\301\152\132\347\261\112\007"
	"\070\230\060\007\212\203\065\104\327\115\207\310\121\044\271\066"
	"\070\361\072\021\151\132\304\254\033\057\006\002\340\121\011\030"
	"\352\072\040\164\276\126\270\225\243\100\136\365\144\030\053\234"
	"\012\145\255\163\277\162\037\333\242\046\335\202\170\347\233\142"
	"\042\274\326\340\022\217\166\266\317\325\253\064\355\326\320\367"
	"\074\176\153\373\361\213\327\224\261\264\026\051\234\262\213\277"
	"\156\142\237\200\361\026\067\301\353\342\365\330\271\306\320\365"
	"\105\074\361\067\307\310\313\170\175\341\241\032\223\055\331\002"
	"\217\171\203\201\217\272\102\172\235\067\123\126\375\044\114\103"
	"\140\076\172\047\006\105\240\204\047\102\237\273\157\170\275\377"
	"\362\100\200\202\373\302\375\230\372\120\357\367\165\073\073\326"
	"\171\265\376\200\373\236\004\042\340\244\335\120\034\233\117\017"
	"\334\317\221\327\222\216\160\214\337\137\204\125\232\277\053\024"
	"\164\051\225\157\307\232\222\247\076\160\367\133\014\107\152\350"
	"\027\373\300\251\212\060\065\151\217\271\276\052\170\352\077\355"
	"\023\324\135\333\156\360\203\254\140\173\007\154\302\161\125\331"
	"\155\025\202\367\105\270\141\325\162\040\000\352\012\077\330\036"
	"\023\066\371\201\046\174\055\207\370\065\363\272\247\111\224\024"
	"\136\027\014\244\317\156\171\101\217\171\054\231\271\005\270\314"
	"\073\261\116\142\056\174\351\047\261\335\341\130\046\166\155\204"
	"\215\172\051\135\351\243\237\170\035\314\022\326\322\312\242\016"
	"\174\360\160\253\154\131\322\036\067\263\167\135\052\345\342\267"
	"\137\013\025\110\256\264\300\313\201\322\242\123\235\104\141\031"
	"\065\322\304\242\053\226\301\143\112\070\300\164\035\243\054\175"
	"\256\101\305\135\366\206\051\167\131\313\313\366\020\055\017\105"
	"\377\323\350\053\152\251\216\264\342\116\050\377\362\125\174\240"
	"\226\102\376\215\310\047\005\042\363\320\030\003\376\047\111\375"
	"\373\062\050\145\334\266\032\276\005\103\275\367\230\072\230\057"
	"\175\226\274\105\276\301\150\262\222\200\266\220\250\000\215\243"
	"\062\266\011\016\155\043\314\162\146\212\152\376\305\003\055\102"
	"\232\351\210\130\253\360\013\076\160\301\316\031\301\134\274\364"
	"\022\305\003\177\351\320\362\117\132\135\116\040\140\173\143\372"
	"\145\354\123\021\334\136\117\115\040\036\146\342\172\043\326\215"
	"\351\331\015\322\251\377\041\004\134\160\044\275\353\210\267\121"
	"\164\013\142\121\151\261\236\212\317\005\154\112\050\102\327\022"
	"\033\344\344\166\340\306\215\201\166\162\163\133\254\252\331\270"
	"\041\115\123\373\100\264\305\103\225\150\143\334\061\347\160\164"
	"\336\141\310\170\214\374\015\066\222\317\261\220\145\113\076\256"
	"\217\021\265\300\224\103\214\156\340\314\103\241\065\260\015\100"
	"\141\211\227\032\145\177\130\357\356\017\000\322\215\010\275\044"
	"\057\075\157\167\171\141\361\151\326\306\205\251\060\226\123\065"
	"\237\357\166\235\063\057\320\171\006\300\104\211\003\333\104\213"
	"\266\342\374\354\337\113\112\045\227\374\021\255\112\146\035\225"
	"\033\251\047\366\112\316\052\016\161\046\015\005\254\114\173\373"
	"\035\342\014\017\117\102\103\063\302\223\121\344\132\125\163\366"
	"\031\376\372\211\364\334\042\274\347\234\331\220\014\243\022\343"
	"\065\347\355\114\315\152\213\053\160\000\051\305\200\364\234\013"
	"\151\372\126\377\036\062\030\237\263\116\041\324\375\335\132\313"
	"\131\231\266\203\060\005\142\214\213\254\161\154\341\104\244\255"
	"\025\162\252\112\306\032\322\360\017\217\365\053\117\310\204\305"
	"\216\165\005\043\122\064\042\365\330\147\223\246\325\222\014\360"
	"\313\274\154\342\370\335\137\241\244\112\157\035\172\035\066\037"
	"\265\141\165\016\334\336\154\325\226\145\172\237\173\314\075\304"
	"\244\172\112\214\151\365\075\020\161\343\167\031\237\253\075\330"
	"\347\246\054\012\126\124\363\104\360\015\072\106\072\012\135\214"
	"\146\345\172\344\363\047\056\141\015\167\017\000\102\171\335\166"
	"\255\206\113\200\275\332\271\372\216\306\015\134\371\216\161\342"
	"\332\306\311\110\335\377\266\144\126\073\036\211\251\052\340\042"
	"\144\213\215\160\020\351\375\227\025\002\210\117\022\252\121\056"
	"\175\301\262\126\122\064\302\221\302\047\124\254\254\364\010\110"
	"\371\334\310\002\141\325\230\205\001\057\105\016\113\345\144\312"
	"\357\075\341\147\227\226\121\077\232\345\341\115\163\347\324\241"
	"\165\014\242\252\304\023\254\004\255\057\302\047\053\070\064\333"
	"\065\250\351\104\335\275\225\052\111\220\221\023\346\022\050\232"
	"\002\143\314\273\025\023\013\077\077\225\237\115\276\005\157\326"
	"\071\032\032\102\074\320\317\361\152\216\351\366\053\175\044\170"
	"\210\021\326\141\262\113\270\247\341\020\036\325\332\142\125\321"
	"\271\067\336\325\307\026\134\062\346\226\073\022\117\170\105\336"
	"\003\324\143\252\244\316\102\137\175\117\341\341\153\012\177\216"
	"\263\275\336\367\223\211\117\244\052\126\026\011\341\165\142\224"
	"\225\216\354\170\145\247\053\023\260\345\005\100\351\007\037\172"
	"\217\215\074\177\050\175\041\043\327\074\345\264\264\372\342\121"
	"\363\106\017\226\025\211\166\364\144\144\276\222\263\205\200\247"
	"\272\140\031\063\255\000\205\024\116\150\160\073\132\113\337\003"
	"\261\327\323\127\370\225\032\231\271\143\357\014\345\373\345\223"
	"\133\064\130\040\061\231\324\347\372\022\354\231\056\146\244\222"
	"\066\207\017\307\051\246\114\075\321\217\147\002\171\335\364\022"
	"\327\327\035\206\300\055\035\262\144\201\305\102\376\210\013\266"
	"\233\330\362\015\054\053\351\051\013\327\267\232\247\150\046\071"
	"\300\025\160\302\112\207\307\135\376\162\263\214\267\306\212\271"
	"\357\051\346\117\146\006\303\100\370\125\121\237\063\126\030\175"
	"\231\031\112\101\116\177\375\065\252\313\055\224\316\126\002\132"
	"\061\346\100\271\364\236\147\277\002\151\071\255\366\333\325\363"
	"\140\140\311\217\045\240\372\003\310\332\034\231\130\077\047\067"
	"\306\121\346\273\214\025\223\212\116\114\331\122\106\037\374\362"
	"\135\107\372\071\277\051\163\312\245\054\127\247\370\341\121\352"
	"\043\270\132\167\344\037\003\036\347\353\300\122\360\354\170\225"
	"\071\276\135\244\377\331\277\164\116\323\375\012\276\376\211\260"
	"\024\320\140\351\242\074\254\341\351\140\202\033\070\025\140\256"
	"\260\041\172\172\005\247\146\070\005\366\212\177\025\110\015\010"
	"\241\065\363\155\131\234\326\122\025\172\073\271\360\060\037\316"
	"\220\301\075\124\164\245\377\034\252\164\006\302\130\276\035\305"
	"\207\354\355\136\225\210\067\040\311\304\276\062\113\172\203\250"
	"\016\111\314\141\262\352\325\077\037\024\070\126\141\066\055\221"
	"\123\371\130\351\042\332\170\020\143\204\176\260\150\076\130\050"
	"\234\005\201\042\046\360\125\145\202\025\200\173\321\226\325\275"
	"\343\123\374\115\335\005\146\112\121\022\125\130\231\006\101\371"
	"\075\207\116\206\115\152\220\071\175\116\203\040\044\010\222\320"
	"\204\317\013\067\267\334\147\001\221\015\375\200\075\155\133\062"
	"\250\110\245\337\336\356\262\054\327\033\025\040\271\202\163\304"
	"\220\134\147\221\066\047\315\277\047\044\202\322\371\177\065\011"
	"\141\021\337\175\250\315\044\352\144\226\255\110\227\032\126\212"
	"\000\305\056\261\256\031\320\234\153\202\157\305\004\170\344\031"
	"\002\170\276\052\357\103\051\370\367\312\343\046\147\066\153\330"
	"\356\045\346\044\020\342\057\131\057\060\164\070\344\144\155\337"
	"\231\105\112\352\343\307\327\053\211\104\064\062\022\040\256\042"
	"\032\165\050\265\004\051\013\232\120\315\125\133\352\114\141\341"
	"\112\101\062\313\252\027\040\302\154\365\042\163\261\173\305\274"
	"\126\050\227\247\103\075\205\200\127\337\224\214\073\261\045\013"
	"\026\065\053\264\177\106\321\317\210\372\124\326\111\370\170\374"
	"\132\245\151\036\342\330\333\256\304\164\247\130\130\022\062\165"
	"\271\136\214\163\054\051\000\042\357\036\074\151\246\053\107\122"
	"\351\303\110\114\317\132\260\202\275\057\210\067\102\144\367\313"
	"\024\270\035\304\054\265\127\233\356\003\264\130\325\130\315\140"
	"\032\007\366\241\012\217\062\101\317\320\126\115\326\245\015\216"
	"\216\036\375\354\224\341\071\205\127\130\364\367\016\112\312\375"
	"\162\211\074\111\024\325\374\035\351\031\321\144\347\323\146\357"
	"\266\202\315\354\260\335\050\153\252\322\312\320\072\303\302\210"
	"\305\200\300\250\172\263\005\041\160\117\277\253\156\217\231\157"
	"\006\226\106\315\277\050\174\153\347\045\315\020\247\304\203\301"
	"\034\262\235\320\333\366\263\345\245\065\377\010\113\253\014\232"
	"\365\065\064\232\320\274\366\034\270\006\162\114\117\272\006\000"
	"\242\157\107\336\125\115\361\335\012\050\340\377\373\275\160\147"
	"\265\066\242\271\147\143\371\137\272\340\311\064\021\363\154\114"
	"\140\214\344\254\211\354\246\326\274\122\116\072\046\117\375\314"
	"\113\130\103\130\240\301\140\240\373\346\013\122\053\376\074\166"
	"\057\126\044\302\342\145\220\007\050\110\254\375\171\040\005\067"
	"\131\123\330\040\255\241\045\355\252\170\131\161\236\322\041\230"
	"\172\154\355\211\260\257\252\344\147\376\167\255\074\213\125\153"
	"\134\162\146\163\163\062\031\372\206\206\136\364\123\243\160\151"
	"\103\211\371\350\005\317\141\045\332\043\373\045\202\166\320\354"
	"\053\250\144\012\352\377\256\371\373\051\117\007\115\264\366\050"
	"\377\074\372\032\131\070\212\303\161\155\071\154\355\260\100\370"
	"\212\014\200\357\264\340\354\374\124\037\160\131\345\117\207\116"
	"\361\352\214\110\343\034\236\326\155\041\131\255\133\313\267\312"
	"\377\137\333\105\072\323\357\063\227\330\337\217\021\166\261\202"
	"\327\271\134\167\121\031\214\244\236\336\154\264\202\201\361\324"
	"\127\177\316\134\170\233\261\203\274\233\147\061\073\374\050\105"
	"\247\241\202\315\100\070\102\334\005\355\304\305\141\260\356\374"
	"\052\062\130\104\064\033\336\374\242\376\025\351\274\220\365\047"
	"\111\326\167\015\317\300\366\024\134\310\324\033\252\021\157\277"
	"\247\043\113\230\277\272\011\017\111\032\160\173\273\047\342\240"
	"\274\012\147\212\104\120\217\127\313\050\064\166\274\147\136\274"
	"\145\003\330\137\157\004\247\116\154\166\366\060\302\164\311\046"
	"\153\047\116\364\055\225\037\167\167\225\233\166\330\225\367\045"
	"\354\354\325\017\347\101\220\257\345\003\134\277\335\360\072\035"
	"\033\370\364\140\323\007\133\156\175\206\073\312\061\264\006\313"
	"\363\340\054\100\335\174\072\230\055\336\154\355\371\353\214\120"
	"\143\056\242\222\273\207\111\317\133\362\210\121\144\001\302\102"
	"\001\362\364\153\206\176\335\255\327\375\222\012\340\112\137\222"
	"\255\227\017\260\275\242\302\242\320\251\235\046\255\315\233\153"
	"\376\352\021\034\230\313\172\345\256\117\106\020\264\202\371\367"
	"\006\266\317\321\035\012\154\214\244\076\230\165\251\374\147\020"
	"\217\273\047\367\063\330\320\054\161\252\356\163\044\035\257\327"
	"\142\155\067\314\207\276\255\261\017\020\206\321\260\116\133\235"
	"\325\052\377\202\024\332\136\231\214\153\114\115\027\247\075\107"
	"\341\233\237\113\043\331\340\214\224\335\106\015\125\236\377\222"
	"\332\115\043\027\164\351\324\165\376\121\042\074\171\374\326\262"
	"\303\135\373\104\337\075\165\017\354\321\074\073\071\041\032\202"
	"\162\075\016\032\354\232\107\320\302\330\346\310\100\052\360\330"
	"\243\030\272\101\174\334\052\251\034\251\253\333\342\122\240\335"
	"\241\114\034\250\132\024\337\273\006\001\241\215\235\047\047\025"
	"\335\117\337\046\071\036\255\342\311\072\003\153\261\277\006\003"
	"\120\375\232\360\147\076\062\203\230\316\105\127\270\202\126\021"
	"\305\252\210\174\243\207\232\363\225\031\310\263\341\003\004\150"
	"\152\103\206\022\273\202\132\261\024\137\033\277\330\123\023\245"
	"\201\017\253\143\136\265\334\120\102\244\116\123\350\017\275\110"
	"\304\110\253\320\206\150\121\317\304\354\307\354\012\173\125\104"
	"\362\265\224\267\006\330\027\265\210\057\042\131\222\137\031\340"
	"\117\343\316\215\324\223\235\256\272\274\236\021\060\256\011\063"
	"\170\175\355\324\057\141\334\363\065\263\234\073\317\067\212\141"
	"\036\135\233\167\151\160\376\170\056\106\212\345\104\105\100\121"
	"\275\125\301\064\065\224\305\114\045\256\171\030\115\330\017\310"
	"\143\006\266\313\211\077\124\111\102\207\026\133\133\215\110\303"
	"\371\157\320\354\357\011\353\323\225\150\142\305\012\314\344\045"
	"\104\102\013\163\160\011\042\002\126\073\152\164\023\266\157\126"
	"\073\264\206\373\030\355\305\014\165\120\313\024\173\104\315\010"
	"\361\041\004\357\036\045\276\074\202\164\103\214\005\207\375\353"
	"\106\101\222\300\243\107\341\034\350\340\174\126\235\032\174\100"
	"\162\116\260\301\332\245\241\232\114\301\256\133\004\256\363\256"
	"\230\223\361\002\236\230\040\012\275\070\303\126\223\277\145\330"
	"\375\374\115\222\043\257\323\067\275\315\301\217\102\034\234\010"
	"\241\130\011\176\066\246\260\140\174\040\126\322\120\177\363\357"
	"\127\223\210\125\320\372\121\220\030\305\122\115\140\306\237\126"
	"\325\077\365\144\307\160\356\121\074\362\034\205\044\022\151\315"
	"\225\117\161\120\215\173\323\055\070\336\100\363\144\354\025\202"
	"\214\107\074\345\051\334\367\217\206\214\162\062\177\217\354\037"
	"\113\066\377\212\372\361\205\047\017\305\014\330\214\147\054\235"
	"\211\152\335\204\112\235\110\104\272\137\272\062\310\211\321\373"
	"\356\335\134\263\154\304\171\141\326\217\043\221\116\050\374\033"
	"\205\074\254\137\261\147\343\251\114\221\142\053\104\175\052\130"
	"\312\311\241\223\310\174\251\061\132\217\116\014\060\064\133\366"
	"\351\167\125\310\014\176\035\207\112\040\147\146\267\167\121\147"
	"\003\016\316\175\027\353\311\111\345\242\012\165\216\154\366\103"
	"\366\312\043\225\157\130\061\011\171\367\376\274\071\112\156\073"
	"\367\167\171\341\367\316\276\074\350\234\145\073\365\044\074\166"
	"\306\242\143\361\374\266\211\236\177\023\171\353\270\145\056\241"
	"\147\041\173\122\242\302\170\323\042\057\354\272\201\167\144\273"
	"\337\256\007\255\264\035\222\143\032\032\104\165\055\003\112\303"
	"\203\114\005\167\320\322\114\316\036\375\122\110\201\111\202\166"
	"\124\211\123\076\010\274\347\225\127\272\377\350\316\120\272\014"
	"\137\215\363\045\032\143\231\176\172\125\251\020\152\102\305\124"
	"\027\312\151\173\243\336\322\037\337\025\243\252\001\342\130\036"
	"\005\257\214\202\331\040\127\057\335\372\225\042\067\153\313\017"
	"\041\355\046\077\070\010\264\000\165\277\252\143\101\311\335\312"
	"\051\072\370\015\170\355\161\354\171\302\135\254\126\223\171\062"
	"\330\003\217\007\266\000\047\221\135\203\146\201\027\151\252\013"
	"\300\130\031\320\236\166\343\322\012\353\237\355\171\043\076\332"
	"\122\207\306\313\271\002\231\262\110\270\146\104\303\065\214\032"
	"\000\202\132\147\234\040\110\333\212\277\160\341\306\135\125\360"
	"\106\276\137\205\332\374\104\233\217\174\114\352\050\206\212\215"
	"\273\072\271\072\165\132\011\170\067\345\341\042\117\055\130\203"
	"\013\316\133\154\017\206\047\355\020\371\132\345\110\221\041\212"
	"\051\113\212\246\225\056\367\164\113\246\124\354\032\327\231\122"
	"\277\220\223\331\075\044\211\135\045\273\302\012\375\145\352\062"
	"\345\145\077\113\325\150\210\127\231\247\146\154\102\014\373\127"
	"\315\361\016\043\336\030\313\142\256\235\234\122\214\111\234\211"
	"\024\305\066\064\272\151\135\232\147\145\302\213\110\341\143\331"
	"\365\170\226\030\010\136\151\050\243\230\066\170\304\162\005\246"
	"\142\207\344\343\331\353\370\015\246\103\333\256\102\133\245\154"
	"\265\274\115\167\130\255\143\350\052\270\066\123\277\147\143\171"
	"\132\127\275\171\101\204\167\224\342\020\116\165\277\233\301\333"
	"\130\162\371\331\176\302\371\355\060\043\120\150\051\271\114\160"
	"\365\007\136\030\066\373\114\002\231\021\103\050\176\050\202\026"
	"\016\306\245\037\122\073\174\014\337\344\201\344\367\344\154\075"
	"\054\235\325\273\071\244\015\254\071\161\172\237\076\011\360\345"
	"\357\032\160\046\155\011\006\266\052\201\167\222\351\226\376\335"
	"\332\113\111\166\105\126\272\170\046\207\161\270\306\034\246\104"
	"\353\174\105\224\365\112\001\160\020\146\046\263\323\271\252\247"
	"\034\003\167\362\141\071\162\006\056\107\161\026\240\131\336\107"
	"\320\371\116\233\127\277\224\202\165\253\124\250\076\251\144\322"
	"\240\001\235\026\341\161\334\171\121\356\117\356\122\266\104\100"
	"\176\272\301\123\130\366\034\024\052\225\202\044\160\250\347\301"
	"\312\256\100\004\335\243\061\353\271\051\236\207\374\125\375\232"
	"\157\111\150\322\004\042\144\200\306\252\323\146\364\160\147\107"
	"\360\211\011\155\024\240\212\207\204\175\200\167\265\103\045\372"
	"\260\332\013\055\216\115\201\320\241\140\133\103\371\302\335\322"
	"\123\231\242\046\236\124\335\354\070\153\261\124\271\125\127\314"
	"\203\227\345\363\212\125\035\161\227\266\040\175\306\134\160\373"
	"\036\053\320\260\124\201\366\007\045\014\206\305\064\121\136\176"
	"\126\052\230\020\262\072\177\371\034\256\362\263\360\347\331\130"
	"\346\153\007\367\271\107\022\105\275\323\242\104\314\166\010\001"
	"\174\207\035\325\111\174\113\171\130\026\073\305\066\010\223\317"
	"\235\026\105\345\141\063\170\373\164\074\146\103\030\220\173\255"
	"\247\322\033\376\045\217\325\321\063\207\231\133\373\123\377\164"
	"\045\377\367\205\375\370\275\102\336\031\222\061\015\234\055\355"
	"\374\213\024\275\252\210\106\212\217\263\356\230\310\066\332\317"
	"\324\216\011\243\265\041\162\164\276\061\324\057\235\110\115\316"
	"\252\035\124\046\277\312\356\172\102\203\104\122\043\175\234\371"
	"\012\267\327\062\110\031\353\100\273\216\273\230\374\263\272\221"
	"\032\104\077\160\223\163\141\310\222\150\230\354\301\170\200\257"
	"\045\274\262\336\260\105\125\015\222\175\025\034\055\247\075\115"
	"\223\122\350\277\347\352\317\341\155\366\243\324\207\142\040\267"
	"\031\344\001\146\222\003\152\152\364\112\147\140\125\274\004\144"
	"\127\067\167\305\377\034\266\000\166\065\056\324\345\133\215\124"
	"\026\366\210\362\123\320\204\346\312\046\136\336\070\350\302\161"
	"\107\170\115\212\071\344\352\330\121\336\141\316\350\013\300\336"
	"\140\324\325\316\114\054\043\020\201\127\266\360\243\305\344\006"
	"\311\101\166\356\376\142\166\266\263\353\301\025\074\053\307\332"
	"\265\227\340\041\341\011\143\271\033\177\236\000\104\202\006\015"
	"\304\175\374\302\340\163\171\223\136\072\251\232\145\161\165\032"
	"\010\125\073\352\137\237\243\173\036\101\173\142\304\202\160\210"
	"\000\154\112\340\337\303\163\076\376\035\330\143\216\115\175\227"
	"\243\271\201\003\130\045\176\166\147\371\331\053\174\112\263\174"
	"\267\376\134\227\302\320\325\300\356\255\044\175\373\242\024\236"
	"\133\226\241\264\274\040\052\043\031\004\116\225\116\002\022\005"
	"\000\156\234\303\077\161\203\055\037\247\252\032\111\277\271\245"
	"\126\133\131\022\173\204\065\225\210\204\053\327\207\075\334\207"
	"\254\171\112\353\353\316\031\012\166\303\045\300\202\336\145\330"
	"\072\277\353\266\103\041\113\314\245\167\243\054\264\200\264\141"
	"\372\377\115\345\316\146\360\104\051\025\004\254\364\152\205\057"
	"\051\161\345\154\222\061\071\070\250\334\145\135\135\032\276\127"
	"\031\013\075\350\161\055\054\233\103\061\110\070\233\316\147\304"
	"\077\114\061\321\175\152\012\046\107\157\203\245\211\102\375\243"
	"\115\072\213\277\150\270\133\253\351\243\344\204\162\113\111\261"
	"\227\173\203\025\346\215\073\055\374\277\323\206\001\320\051\116"
	"\012\265\016\163\155\151\037\127\015\003\333\177\116\045\061\346"
	"\241\264\373\207\102\067\265\076\366\210\305\367\130\357\106\143"
	"\244\125\326\022\276\365\151\314\370\105\114\107\153\175\055\014"
	"\062\051\224\164\141\111\263\130\321\170\117\052\150\226\216\014"
	"\353\144\037\252\132\211\166\123\316\303\232\071\100\310\106\162"
	"\362\332\346\123\044\232\253\366\022\373\040\172\221\256\207\175"
	"\023\247\047\155\060\236\300\376\141\133\070\241\044\177\024\026"
	"\131\373\152\175\225\026\163\250\021\224\043\243\103\253\041\126"
	"\122\110\304\202\346\205\201\110\340\271\352\005\070\376\034\222"
	"\372\206\020\220\235\204\070\257\030\134\122\134\007\163\262\131"
	"\274\166\334\243\374\135\353\335\026\326\342\117\324\376\342\317"
	"\205\362\137\042\167\230\322\217\365\044\354\374\230\236\126\125"
	"\025\062\371\021\217\344\356\246\272\321\365\217\320\330\137\125"
	"\313\277\170\102\130\112\322\115\157\276\111\010\134\237\136\162"
	"\321\127\204\140\074\162\006\367\104\374\206\024\325\346\152\240"
	"\245\343\342\375\056\264\112\235\162\224\246\317\064\004\101\005"
	"\133\305\146\227\070\155\217\174\152\026\221\077\374\374\337\242"
	"\337\301\237\015\166\352\253\350\177\122\267\263\126\371\271\262"
	"\276\037\112\367\215\331\164\370\357\005\067\353\001\027\215\341"
	"\331\055\357\117\030\232\070\227\354\357\113\103\350\004\365\247"
	"\044\100\236\261\031\022\251\011\030\341\364\032\371\202\373\322"
	"\260\353\042\311\205\133\140\162\112\254\265\063\260\253\333\324"
	"\353\172\206\005\215\060\016\245\022\003\300\013\206\274\336\067"
	"\247\001\000\054\134\141\237\246\015\125\332\275\000\266\222\354"
	"\060\030\362\275\110\000\143\132\004\043\146\213\337\104\302\206"
	"\105\302\263\241\044\122\110\061\247\043\357\250\331\202\224\012"
	"\232\207\307\343\210\052\075\214\116\244\027\055\350\331\263\055"
	"\234\147\317\301\271\027\363\141\072\342\011\024\144\236\036\377"
	"\045\346\342\256\020\040\072\136\304\122\214\255\054\100\333\310"
	"\247\252\211\141\302\175\302\375\137\314\021\304\153\060\304\221"
	"\026\247\077\047\310\171\206\215\314\022\072\370\123\025\300\372"
	"\300\112\133\202\307\036\200\047\353\222\354\126\302\261\347\331"
	"\130\046\001\040\240\207\255\154\232\350\145\355\375\045\350\276"
	"\160\104\101\070\143\301\140\116\123\115\244\026\376\214\357\126"
	"\263\360\167\124\170\045\300\023\015\045\001\013\113\351\311\274"
	"\056\012\365\221\314\126\337\040\243\204\066\242\020\046\371\304"
	"\027\160\030\217\225\331\243\243\377\244\256\113\215\167\007\273"
	"\202\375\115\116"
#define      inlo_z	3
#define      inlo	((&data[5169]))
	"\123\267\373"
#define      chk2_z	19
#define      chk2	((&data[5175]))
	"\232\302\314\254\016\177\257\030\312\102\000\123\361\056\050\217"
	"\057\210\242\146\002\112\223\206\343"
#define      pswd_z	256
#define      pswd	((&data[5237]))
	"\232\167\026\075\166\272\354\301\110\143\311\004\346\307\122\064"
	"\033\177\243\023\060\111\255\362\025\101\171\371\105\027\154\340"
	"\216\203\036\005\076\012\306\206\370\060\075\334\366\152\031\347"
	"\146\011\040\113\011\005\202\275\105\342\266\212\033\125\175\023"
	"\065\127\140\136\112\251\005\103\332\103\037\320\256\070\270\025"
	"\102\330\140\114\335\342\012\043\305\301\255\340\026\052\364\113"
	"\202\125\252\314\376\257\020\331\363\057\251\241\150\142\266\252"
	"\072\027\366\030\372\001\073\277\302\351\240\330\023\224\044\226"
	"\351\316\143\350\176\163\301\162\242\153\024\012\315\312\265\010"
	"\342\254\040\334\255\134\233\157\105\073\107\131\320\154\357\272"
	"\073\122\242\272\305\144\054\150\320\100\163\236\013\050\246\356"
	"\324\306\312\201\043\146\360\150\242\070\301\162\245\261\054\340"
	"\003\317\232\311\064\307\062\004\010\245\242\024\315\111\002\242"
	"\020\314\044\063\062\025\233\324\116\135\107\363\017\164\323\023"
	"\104\156\334\170\066\017\175\077\264\040\123\202\151\125\044\171"
	"\042\111\254\125\136\110\052\254\246\161\237\265\346\163\310\052"
	"\342\245\242\030\264\040\127\151\100\253\353\251\000\020\043\042"
	"\131\317\170\270\030\242\144\276\024\004\164\372\167\075\044\132"
	"\342\307\163\227\347\312\000\047\155\220\213\124\127\335\210\162"
	"\134\054\205\215\165\062\177\213\163\371\204\271\020\361\232\237"
	"\164\270\244\262\302"
#define      msg2_z	19
#define      msg2	((&data[5523]))
	"\373\226\351\351\235\043\135\155\123\074\112\327\231\210\342\041"
	"\052\051\374\205"
#define      tst2_z	19
#define      tst2	((&data[5544]))
	"\241\015\313\175\344\065\154\232\336\330\222\004\250\245\013\016"
	"\330\245\324\366\136\305"
#define      msg1_z	42
#define      msg1	((&data[5566]))
	"\213\260\363\340\015\024\052\342\171\163\351\327\214\176\241\042"
	"\050\301\003\347\177\074\236\263\276\103\336\024\102\170\174\365"
	"\040\104\120\163\220\225\150\372\335\210\314\343\175\013\073"
#define      shll_z	10
#define      shll	((&data[5611]))
	"\214\274\063\220\171\217\302\230\213\373\252\025"
#define      rlax_z	1
#define      rlax	((&data[5623]))
	"\371"
#define      xecc_z	15
#define      xecc	((&data[5627]))
	"\327\300\304\326\171\266\025\243\025\077\326\374\155\151\330\116"
	"\154\373\021"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	0	/* Define as 1 to enable ptrace the executable */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned long)&chkenv;
	mask ^= (unsigned long)getpid() * ~mask;
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = getenv("_");
	if (me == NULL) { me = argv[0]; }

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	ret = chkenv(argc);
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
	varg[j++] = argv[0];		/* My own name at execution */
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
