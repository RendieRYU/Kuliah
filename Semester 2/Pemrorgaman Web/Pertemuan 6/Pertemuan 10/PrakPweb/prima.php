<?php
	if (isset($_POST['submit'])){
		$number = $_POST['input'];
		function isGenap($number){
			if ($number <= 1)
				return false;
			for ($i = 2; $i < $number; $i++){
				if ($number % $i == 0)
					return false;
			}
			return true;
		}
	}
?>

<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<title>POSTEST 8</title>
	<link rel="stylesheet" type="text/css" href="style8.css">
	<link rel="preconnect" href="https://fonts.gstatic.com">
	<link rel="preconnect" href="https://fonts.gstatic.com">
	<link href="https://fonts.googleapis.com/css2?family=Bree+Serif&display=swap" rel="stylesheet">
	<link href="https://fonts.googleapis.com/icon?family=Material+Icons" rel="stylesheet">
	<link href="https://fonts.googleapis.com/css2?family=Montserrat:ital,wght@1,900&display=swap" rel="stylesheet">
</head>
<body> 
	<div class="main">
		<div id="profil">
			<div id="besar"><h1>BILANGAN<br>PRIMA</h1></div>
			<div id="kecil">merupakan bilangan asli yang lebih besar dari angka 1, yang faktor pembaginya adalah 1 dan bilangan itu sendiri </div>
		</div>
		<div class="nav">
			<div class="word_1">MENGECEK BILANGAN PRIMA</div>
			<div class="word_2">POSTEST 8</div>
			<div class="icon">MENGECEK BILANGAN PRIMA</div>
		</div>
		<form action="INDEX.HTML" method="">
			<?php echo $number ?>
				<div class="utama">
					<div class="ling1"></div>
					<div class="ling2"></div>
					<div class="ling3"></div>
					<div><hr id="hr1"></div>
					<div class="label-hasil"><h2>Hasil</h2></div>
					<div class="input-bil">
						<div id="icon"><i class="material-icons" id="icon1">download_done</i></div>
						<div id="input-bil2">
							<div id="hasil"><p>
								<?php
									if (isGenap($number)) {
										echo "$number adalah bilangan prima";
									  } else {
										echo "$number adalah bukan bilangan prima";
									  }								  
								?></p>	
							</div>	
						</div>
					</div>
					<div class="kembali"><input type="submit" name="submit" value="KEMBALI" id="kembali"></div>
				</div>
		</form>
		<div id="footer">Dibuat dengan <i class="material-icons" id="icon1">favorite</i>oleh Rendie Abdi Saputra</div>
	</div>
</body>
</html>