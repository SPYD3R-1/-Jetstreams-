<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Calculator Application 2.0</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            text-align: center;
            background-color: #f4f4f4;
        }
        .calculator {
            width: 300px;
            margin: 50px auto;
            padding: 20px;
            background: white;
            box-shadow: 0px 0px 10px rgba(0, 0, 0, 0.1);
            border-radius: 10px;
        }
        input, button, select {
            margin: 10px;
            padding: 10px;
            font-size: 16px;
            width: 90%;
        }
        button {
            background-color: #28a745;
            color: white;
            border: none;
            cursor: pointer;
        }
        button:hover {
            background-color: #218838;
        }
    </style>
</head>
<body>
    <div class="calculator">
        <h2>Calculator</h2>
        <input type="number" id="num1" placeholder="Enter first number">
        <input type="number" id="num2" placeholder="Enter second number">
        <select id="operation">
            <option value="add">Addition</option>
            <option value="sub">Subtraction</option>
            <option value="mul">Multiplication</option>
            <option value="div">Division</option>
        </select>
        <button onclick="calculate()">Calculate</button>
        <h3>Result: <span id="result">0</span></h3>
    </div>
    
    <script>
        function calculate() {
            let num1 = parseFloat(document.getElementById('num1').value);
            let num2 = parseFloat(document.getElementById('num2').value);
            let operation = document.getElementById('operation').value;
            let result;
            
            if (isNaN(num1) || isNaN(num2)) {
                result = "Please enter valid numbers";
            } else {
                switch (operation) {
                    case "add": result = num1 + num2; break;
                    case "sub": result = num1 - num2; break;
                    case "mul": result = num1 * num2; break;
                    case "div": 
                        if (num2 === 0) {
                            result = "Error! Division by zero is not allowed.";
                        } else {
                            result = num1 / num2;
                        }
                        break;
                }
            }
            document.getElementById('result').textContent = result;
        }
    </script>
</body>
</html>
