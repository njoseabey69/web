<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Computer Marketing</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 0;
            padding: 0;
            background-color: #f4f4f4;
        }
        header {
            background-color: #333;
            color: #fff;
            padding: 10px 0;
            text-align: center;
        }
        nav {
            display: flex;
            justify-content: center;
            background-color: #444;
        }
        nav a {
            color: #fff;
            padding: 14px 20px;
            text-decoration: none;
            text-transform: uppercase;
        }
        nav a:hover {
            background-color: #555;
        }
        .container {
            padding: 20px;
        }
        .product {
            display: flex;
            margin-bottom: 20px;
            background-color: #fff;
            padding: 10px;
            border-radius: 5px;
            box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
        }
        .product img {
            max-width: 200px;
            margin-right: 20px;
        }
        .product-details {
            flex: 1;
        }
        footer {
            background-color: #333;
            color: #fff;
            text-align: center;
            padding: 10px 0;
            position: fixed;
            width: 100%;
            bottom: 0;
        }
    </style>
</head>
<body>
    <header>
        <h1>Computer Marketing</h1>
    </header>
    <nav>
        <a href="#">Home</a>
        <a href="#">Products</a>
        <a href="#">About Us</a>
        <a href="#">Contact</a>
    </nav>
    <div class="container">
        <div class="product">
            <img src="https://via.placeholder.com/200" alt="Product Image">
            <div class="product-details">
                <h2>Product 1</h2>
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Proin ac libero nec urna fermentum tincidunt.</p>
            </div>
        </div>
        <div class="product">
            <img src="https://via.placeholder.com/200" alt="Product Image">
            <div class="product-details">
                <h2>Product 2</h2>
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Proin ac libero nec urna fermentum tincidunt.</p>
            </div>
        </div>
    </div>
    <footer>
        <p>© 2024 Computer Marketing. All rights reserved.</p>
    </footer>
</body>
</html>
