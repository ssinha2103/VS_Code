<!DOCTYPE html>
<html>

<body>
    <?php
    $fptr = fopen("Student.txt", "r");
    // echo var_dump($fptr);
    if (!$fptr) {
        die("Unable to open this file. Please enter a valid filename");
    }else{
        echo "File opened successfully";
        $txt = "Student 1\n";
        fwrite($fptr, $txt);
        fwrite($fptr, "Computer Science with Bioinformatics\n");
        echo "\n";
        echo "Data Appended into a file";
    }
    ?> </body>

</html>