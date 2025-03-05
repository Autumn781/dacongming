<?php
//simplexml_load_file接受文件
//simplexml_load_string接受内容
$x = simplexml_load_file(filename: '1.xml');
$q =$x->man;
echo '名字：'.$q->name.'<hr>';
echo '年龄：'.$q->age.'<hr>';
$s=$x->u;
echo 'u'.$s.'<hr>';
$s=file_get_contents('http://xxx.com/'.$name.'xxx.xml');
simplexml_load_string($s);
$name=$_GET['name'];