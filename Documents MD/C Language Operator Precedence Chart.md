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
</div>
<div>
    <h4>To make sure you understand this eveluate the following expresions</h4>
    <h5>
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
    </h5>
</div>
