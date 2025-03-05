<?php
//
$x = simplexml_load_file('1.xml');
//添加子节点addChild('标签‘，’标签里的值‘)
$man = $x->addChild('man');
$man->addChild('name','dan');
$man->addChild('age','765');
$x->asXML('1.xml'); 