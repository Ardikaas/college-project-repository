<?php
session_start();
session_unset();
session_destroy();
include_once('config.php');

$final = mysqli_query($conn, "SELECT * FROM cv_data ORDER BY nama ASC");
$data = mysqli_fetch_array($final);
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link href="style.css" rel="stylesheet">
    <title>Curriculum Vitae | Home</title>
</head>
<body>
    <header>
        <a href="admin.php">Login</a>
    </header>
    <div class="container">
        <div class="profile">
            <img src="<?php echo $data['foto_path'] ?>" alt="">
            <h1><?php echo $data['nama'] ?></h1>
            <h4><?php echo $data['alamat'] ?></h4>
            <a href="<?php echo $data["web"] ?>" target="_blank"><?php echo $data["web"] ?></a>
            <div class="card-detail">
                <div class="detail">
                    <h1>Pendidikan</h1>
                    <h4><?php echo $data['pendidikan'] ?></h4>
                    <h1>Pengalaman Kerja</h1>
                    <h4><?php echo $data['pengalaman_kerja'] ?></h4>
                    <h1>Keterampilan</h1>
                    <h4><?php echo $data['keterampilan'] ?></h4>
                </div>
                <div class="contact">
                    <h1>Email</h1>
                    <h4><?php echo $data['email'] ?></h4>
                    <h1>No. Telp</h1>
                    <h4><?php echo $data['telepon'] ?></h4>
                </div>
            </div>
        </div>
    </div>
</body>
</html>