<?php
session_start();
include_once('config.php');

if(!empty($_SESSION["id"])){
  header("Location: edit.php");
}

if(isset($_POST['submit'])){
  $email = $_POST['email'];
  $password = $_POST['password'];
  $final = mysqli_query($conn, "SELECT * FROM cv_login WHERE username = '$email' OR email = '$email'");
  $data = mysqli_fetch_array($final);
  if(mysqli_num_rows($final) > 0){
    if($password == $data["pass"]){
      $_SESSION["login"] = true;
      header("Location: edit.php");
    }else{
      echo "
      <script>
      alert('email atau kata sandi yang anda masukkan salah');
      setTimeout(function() {
      }, 10000);
      window.location.href = 'index.php';
      </script>";
    }
  }else{
    echo "
      <script>
      alert('email atau kata sandi yang anda masukkan salah');
      setTimeout(function() {
      }, 10000);
      window.location.href = 'index.php';
      </script>";
  }
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <link rel="stylesheet" href="style.css">
  <title>Curriculum Vitae | Login</title>
</head>
<body>
  <div class="login-con">
    <div class="login-card">
      <h2>Login</h2>
      <div class="login-form">
        <form action="" method="post" autocomplete="off">
          <h5>Username or Email</h5>
          <input type="text" name="email" id="email" required value="">
          <h5>Password</h5>
          <input type="password" name="password" id="password" required value="">
          <button type="submit" name="submit">Login</button>
        </form>
      </div>
    </div>
  </div>
</body>
</html>