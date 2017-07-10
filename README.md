# JS practice
Task 1
P.S. not for C :)
//
2 кнопки. одна открывает окна по одному. вторая закрывает все сразу.
сначала вводишь число. каждое последущее открытое окно должно быть правее.
не быть поверх предшествуещего. в новых окнах должны отображатся римские цифры.
каждая последущая это умноженая на введенное число предведущая.
ввели число 5. значит. стартовая 1*5 = 5 -> V следущая цифра 5*5 =25 = XXV и тд.

# Task 2

// rollet .you have 1 div with class=span1. then you should input random number(let it be "Xnumber") from 1 to 10. it will create Xnumber of div's . and one of them(randomly is a secret one) when you click on every of them it shoul change background color. red - if false and green if you find secret number. 
<head>
		<title>dom</title>
		<style>
			.span1 {
				display: block;
				width: 50px;
				height: 50px;
				background: yellow;
				margin: 10px;
				float: left;
			}

			.spanRed{
				background: red;
				display: block;
				width: 50px;
				height: 50px;
				margin: 10px;
				float: left;
			}

			.spanGreen{
				background: green;
				display: block;
				width: 50px;
				height: 50px;
				margin: 10px;
				float: left;
			}

		</style>
	</head>
  
  
