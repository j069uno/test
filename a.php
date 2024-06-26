#!/usr/bin/php
<?php 
  foreach(file('/usr/share/dict/words') as $line){
    if (strpos($line, 'abc') !== false) {  //abcが含まれないときfalseを返す。trueの場合はechoを返す
      echo "$line";
  }
  }
?>