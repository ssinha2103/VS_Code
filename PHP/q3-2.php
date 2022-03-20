<!DOCTYPE html>
<html>

<body>
    <?php
    $file = "Student.txt";
    // Check the existence of file
    if (file_exists($file)) {
        // Open the file for reading
        $handle = fopen($file, "r") or die("ERROR: Cannot open the
file.");
        /* Some code to be executed */
        // Closing the file handle
        echo "Done";
        fclose($handle);
    } else {
        echo "ERROR: File does not exist.";
    }
    ?>
</body>

</html>