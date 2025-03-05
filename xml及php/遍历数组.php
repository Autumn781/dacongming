<?php
//
$x = simplexml_load_file('1.xml');
foreach($x->man as $v){
    echo $v->name;
}
$c =count($x->man);
for($i = 0; $i < $c; $i++){
    echo $x->man[$i]->name;
}
//for(基数，判断，计数){}