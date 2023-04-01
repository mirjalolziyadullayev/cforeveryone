<body>
  
<h2>C Operator Precedence Table</h2>
<p>C operators are listed in order of <i>precedence</i> (highest to lowest). Their <i>associativity</i>
indicates in what order operators of equal precedence in an expression are applied.</p>

<table style="width:100%">
  <tr>
    <th>Operator</th>
    <th>Description</th>
    <th>Associativity</th>
  </tr>
  <tr>
    <td>
	()<br>
	[ ]<br>
	.<br>
	-><br>
	++ --<br>
    </td>
    <td>Parentheses: grouping or function call<br>
Brackets (array subscript)<br>
Member selection via object name<br>
Member selection via pointer<br>
Postfix increment/decrement</td>
    <td>left-to-right</td>
  </tr>
  <tr>
    <td>
      ++ --<br>
      + -<br>
      ! ~<br>
      (type)<br>
      *<br>
      &<br>
      sizeof<br>
    </td>
    <td>Prefix increment/decrement<br>
        Unary plus/minus<br>
        Logical negation/bitwise complement<br>
        Cast (convert value to temporary value of type)<br>
        Dereference<br>
        Address (of operand)<br>
        Determine size in bytes on this implementation<br>
    </td>
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
    <td>
    < <=<br>
    > >=<br>
    </td>
    <td>Relational less than/less than or equal to<br>
      	Relational greater than/greater than or equal to<br>
    </td>
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
    <td>
      =<br>
      += -=<br>
      *= /=<br>
      %= &=<br>
      ^= |=<br>
      <<= >>=<br>
    </td>
    <td>Assignment<br>
      Addition/subtraction assignment<br>
      Multiplication/division assignment<br>
      Modulus/bitwise AND assignment<br>
      Bitwise exclusive/inclusive OR assignment<br>
      Bitwise shift left/right assignment<br>
    </td>
    <td>right-to-left</td>
  </tr>
  <tr>
     <td>,</td>
     <td>Comma (separate expressions)</td>
     <td>left-to-right</td>
  </tr>
</table>

</body>
