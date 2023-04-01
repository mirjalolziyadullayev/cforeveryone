<body>
  
<h2>C Operator Precedence Table</h2>
<p>C operators are listed in order of precedence (highest to lowest). Their associativity
indicates in what order operators of equal precedence in an expression are applied.</p>

<table style="width:100%">
  <tr>
    <th>Operator</th>
    <th>Description</th>
    <th>Associativity</th>
  </tr>
  <tr>
    <td>()
[ ]
.
->
++ --</td>
    <td>Parentheses: grouping or function call
Brackets (array subscript)
Member selection via object name
Member selection via pointer
Postfix increment/decrement</td>
    <td>left-to-right</td>
  </tr>
  <tr>
    <td>++ --
+ -
! ~
(type)
*
&
sizeof</td>
    <td>Prefix increment/decrement
Unary plus/minus
Logical negation/bitwise complement
Cast (convert value to temporary value of type)
Dereference
Address (of operand)
Determine size in bytes on this implementation</td>
    <td>right-to-left</td>
  </tr>
  <tr>
  	<td>* / %</td>
    <td>Multiplication/division/modulus</td>
    <td>left-to-right</td>
  </tr>
    <tr>
  	<td>+ -</td>
    <td>Addition/subtraction</td>
    <td>left-to-right</td>
  </tr>
    <tr>
  	<td><< >></td>
    <td>Bitwise shift left, Bitwise shift right </td>
    <td>left-to-right</td>
  </tr>
    <tr>
  	<td>< <=
> >=</td>
    <td>Relational less than/less than or equal to
Relational greater than/greater than or equal to</td>
    <td>left-to-right</td>
  </tr>
    <tr>
  	<td>== !=</td>
    <td>Relational is equal to/is not equal to</td>
    <td>left-to-right</td>
  </tr>
    <tr>
  	<td>&</td>
    <td>Bitwise AND</td>
    <td>left-to-right</td>
  </tr>
    <tr>
  	<td>^</td>
    <td>Bitwise exclusive OR</td>
    <td>left-to-right</td>
  </tr>
    <tr>
  	<td>|</td>
    <td>Bitwise inclusive OR</td>
    <td>left-to-right</td>
  </tr>
    <tr>
  	<td>&&</td>
    <td>Logical AND</td>
    <td>left-to-right</td>
  </tr>
    <tr>
  	<td>| |</td>
    <td>Logical OR</td>
    <td>left-to-right</td>
  </tr>
    <tr>
  	<td>? :</td>
    <td>Ternary conditional</td>
    <td>right-to-left</td>
  </tr>
    <tr>
  	<td>=
+= -=
*= /=
%= &=
^= |=
<<= >>=</td>
    <td>Assignment
Addition/subtraction assignment
Multiplication/division assignment
Modulus/bitwise AND assignment
Bitwise exclusive/inclusive OR assignment
Bitwise shift left/right assignment</td>
    <td>right-to-left</td>
  </tr>
    <tr>
  	<td>,</td>
    <td>Comma (separate expressions)</td>
    <td>left-to-right</td>
  </tr>
</table>

</body>
