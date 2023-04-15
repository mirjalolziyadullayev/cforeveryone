<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=, initial-scale=1.0">
    <title>C Language Operator Precedence Chart</title>
</head>
<body>
<style>
    body {
        padding: 50px;
        background-color: azure;
        font-family: system-ui, -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;
    }
    h3{
        padding-left: 50px;
    }
    td, th {
        border: 1px turquoise solid;
        background-color: lightcyan;
        padding: 10px;
    }
</style>
<div>
    <h2>C Language Operator Precedence Chart</h2>
    <br>
    <P>Operator precedence describes the order in which C reads expressions. For example, the expression <strong>a=4+b*2</strong> contains two operations, an addition and a multiplication. Does the C compiler evaluate <strong>4+b</strong> first, then multiply the result by <strong>2</strong>, or does it evaluate <strong>b*2</strong> first, then add <strong>4</strong> to the result? The operator precedence chart contains the answers. Operators higher in the chart have a higher precedence, meaning that the C compiler evaluates them first. Operators on the same line in the chart have the same precedence, and the "Associativity" column on the right gives their evaluation order.</P>    
</div>
<div>
    <h3>Operator Precedence chart</h3>
    <table>
        <tr>
            <th>Operator Type</th>
            <th>Operator</th>
            <th>Associativity</th>
        </tr>
        <tr>
            <td>Primary Expressions Operators</td>
            <td>() [] . -> <i>expr++</i> <i>expr--</i></td>
            <td>left-to-right</td>
        </tr>
        <tr>
            <td>Unary Operators</td>
            <td>* & + ! ~ <i>++expr</i>> <i>--expr<i> (<i>typecast</i>) sizeof</td>
            <td>right-to-left</td>
        </tr>
        <tr>
            <td rowspan="10">Binary Operators</td>
            <td>* / %</td>
            <td rowspan="10">left-to-right</td>
        </tr>
        <tr>
            <td>+ -</td>
        </tr>
        <tr>
            <td>>> <<</td>
        </tr>
        <tr>
            <td>< > <= >=</td>
        </tr>
        <tr>
            <td>== !=</td>
        </tr>
        <tr>
            <td>&</td>
        </tr>
        <tr>
            <td>^</td>
        </tr>
        <tr>
            <td>|</td>
        </tr>
        <tr>
            <td>&&</td>
        </tr>
        <tr>
            <td>||</td>
        </tr>
        <tr>
            <td>Ternary Operator</td>
            <td>?:</td>
            <td>right-to-left</td>
        </tr>
        <tr>
            <td>Assignment Operators</td>
            <td>= += -= *= /= %= >>= <<= &= ^= |=</td>
            <td>right-to-left</td>
        </tr>
        <tr>
            <td>Comma</td>
            <td>,</td>
            <td>left-to-right</td>
        </tr>
    </table>
    <h5>2023. by Person</h5>

    <h4>To make sure you understand this eveluate the following expresions</h4>
    <p>
        3 * 5 <br>
        3 * 5 + 2 <br>
        3 * (5 + 2) <br>
        5 % 3 <br>
        3 % 3 <br>
        -5 % 3 <br>
        5 < 7 + 2 <br>
        7 < 5 + 2 <br>
        (5 < 7) + 2 <br>
        8 == -8 <br>
        8 == -(-8) <br>
        8 == +8 <br>
        3 / 5 <br>
        3.0 / 5 <br>
        3 / 5.0 <br>
    </p>
</div>
</body>
</html>
