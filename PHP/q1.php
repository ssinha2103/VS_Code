<!DOCTYPE html>

<html>

<body>

    <?php

    $a1 = array(10, 20);

    //array_pad

    echo "array pad:-";

    print_r(array_pad($a1, 3, 30));

    $a2 = array(40, 50, 60, 40);

    //array_merge

    echo "<br>array merge:-";

    print_r(array_merge($a1, $a2));

    //array pop delete last element

    array_pop($a1);

    echo "<br> Pop element:-";

    print_r($a1);

    //search

    echo "<br>Search element:-", array_search(60, $a2);

    //sum

    echo "<br>Sum: ", array_sum($a2);

    //unique

    echo "<br> unique:-";

    print_r(array_unique($a2));

    echo "<br>string function:<br>";

    //convert inoto hexa

    $str1 = "Hello World<br>";

    echo $str1;

    $str2 = bin2hex($str1);

    echo "<br>HEX convert: ", $str2;

    echo "<br.> first occurance: ";

    echo strchr($str1, "World");

    echo "<br> Compare two strings: ";


    echo strcmp("Hello world!", "Hello world!");

    echo "<br> String Reverse: ", strrev("Hello World!");

    echo "<br> Repeat String: ", str_repeat("Wow", 5);

    echo "<br> Count total words in string: ", str_word_count("Hello world welcome to programmming language!");

    echo "<br> Remove characters: ", trim($str1, "H");

    ?>

</html>

</body>

</html>