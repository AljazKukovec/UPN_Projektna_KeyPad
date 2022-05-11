# UPN - Projektna Naloga - KeyPad (DOKUMENTACIJA)

## Navodila

Elektronska ključavnica 1: Na voljo imate 9 tipk (številke 1 do 9 na tipkovnici 3x4 "keypad").
S pravilno kombinacijo 4 številk (npr. 6789) odpremo ključavnico (zelena LED).
Vsaka napaka vrne krmilje v izhodiščni položaj. Vpis kombinacije je mogoč samo,
če je vklopljeno stikalo na pozicijo 1.  

## Kosovnica

<ul>
  <li> 1x redeča LED </li>
  <li> 1x zelena LED </li>
  <li> 1x KeyPad 3x4 </li>
  <li> 1x Arduino UNO </li>
  <li> 2x 220Ω upor </li>
  <li> 1x BreadBoard </li>
  <li> 1x On/Off Switch </li>
</ul>


## UPORABA

### 1. Priredbeni Seznam

<table align>
  <th colspan=4> VHODI </th>
  <tr>
    <td> Oznaka v Načrtu </td>
    <td> Naslov Operanda </td>
    <td> Vrsta Kontakta </td>
    <td> Pomen </td>
  </tr>
  <tr>
    <td> S1 </td>
    <td> X0 </td>
    <td> N.O. </td>
    <td> Vklopi in izklopi delovanje elektronske ključavnice </td>
  </tr>
  <tr>
    <td> S2 </td>
    <td> X1 </td>
    <td> N.O. </td>
    <td> Tipka za vnos številke 1 </td>
  </tr>
  <tr>
    <td> S3 </td>
    <td> X2 </td>
    <td> N.O. </td>
    <td> Tipka za vnos številke 2 </td>
  </tr>
  <tr>
    <td> S4 </td>
    <td> X3 </td>
    <td> N.O. </td>
    <td> Tipka za vnos številke 3 </td>
  </tr>
  <tr>
    <td> S5 </td>
    <td> X4 </td>
    <td> N.O. </td>
    <td> Tipka za vnos številke 4 </td>
  </tr>
  <tr>
    <td> S6 </td>
    <td> X5 </td>
    <td> N.O. </td>
    <td> Tipka za vnos številke 5 </td>
  </tr>
  <tr>
    <td> S7 </td>
    <td> X6 </td>
    <td> N.O. </td>
    <td> Tipka za vnos številke 6 </td>
  </tr>
  <tr>
    <td> S8 </td>
    <td> X7 </td>
    <td> N.O. </td>
    <td> Tipka za vnos številke 7 </td>
  </tr>
  <tr>
    <td> S9 </td>
    <td> X8 </td>
    <td> N.O. </td>
    <td> Tipka za vnos številke 8 </td>
  </tr>
  <tr>
    <td> S10 </td>
    <td> X9 </td>
    <td> N.O. </td>
    <td> Tipka za vnos številke 9 </td>
  </tr>
  <tr>
    <td> S11 </td>
    <td> X10 </td>
    <td> N.O. </td>
    <td> Tipka za vnos številke 0 </td>
  </tr>
  <tr>
    <td> S12 </td>
    <td> X11 </td>
    <td> N.O. </td>
    <td> Tipka za vnos karakterja * in ponastavljanje vnosa pin-kode</td>
  </tr>
  <th colspan=4> IZHODI </th>
  <tr>
    <td> OZNAKA V NAČRTU </td>
    <td> NASLOV OPERANDA </td>
    <td> AKTIVEN PRI </td>
    <td> POMEN </td>
  </tr>
  <tr>
    <td> red LED </td>
    <td> Y0 </td>
    <td> "1" </td>
    <td> Če je prižgana je trenuten vnos napačen </td>
  </tr>
  <tr>
    <td> green LED </td>
    <td> Y1 </td>
    <td> "1" </td>
    <td> Ko vnesete pravileno pin-kodo se rdeča ugasne in zelena prižge (in gori do naslednjega napačnega vnosa ali posnastavitve vnosa) </td>
  </tr>
</table>




### 2. Vkolp ključavnice

<table>
  <th colspan=2> SWITCH </th>
    <tr>
      <td> OFF </td>
      <td> Kjučavnica ne sprejema vnašanja števil </td>
    <tr>
      <td> ON </td>
      <td> Ključavnica sprejema vnašanje števil </td>
</table>

### 3. Vnašanje PIN kode

<ol>
  <li> Ko je stikalo prižgano in ključavnica sprejema vnašanje števil lahko začnemo vnašati PIN kodo. </li>
  <li> Ključavnica ves čas preverja ali je vnos pravilen </li>
  <ol>
    <li> Če je vnošeno geslo pravilno terminal izpiše "Geslo je pravilno" </li>
    <li> Če je vnošeno geslo napačno terminal izpiše "Geslo je napačno" </li>
  </ol>
  <li> Uporabnik lahko vnese '*' kar ponastavi trenutni vnos. </li>
</ol>


### 4. Fritzing Skematika / BreadBoard

<table>
  <th colspan=2> Fritzing </th>
    <tr>
      <td> Skematika </td>
      <td> <img src="https://github.com/AljazKukovec/UPN_Projektna_KeyPad/blob/main/KeyPad3x4_Fritzing/KeyPad3x4_Schem.svg" alt="Fritzing skematika" width="500"> </td>
    <tr>
      <td> Breadboard </td>
      <td> <img src="https://github.com/AljazKukovec/UPN_Projektna_KeyPad/blob/main/KeyPad3x4_Fritzing/KeyPad3x4_breadboard.svg" alt="Fritzing breadboard" width="500"> </td>
</table>

### 5. Libraries

1. Spletne strani
  * Fritzing [model](https://github.com/brucetsao/Fritzing/blob/master/KEYPAD%204x3.fzpz) KeyPad-a (spletna stran)
  * Arduino [Keypad.h](https://playground.arduino.cc/Code/Keypad/) library 
2. Datoteke (v tem repozitoriju)
  * Ffritzing [model](https://github.com/AljazKukovec/UPN_Projektna_KeyPad/blob/main/KeyPad_Arduino_Library.zip) KeyPad-a 
  * Arduino [Keypad.h](https://github.com/AljazKukovec/UPN_Projektna_KeyPad/blob/main/KeyPad_Arduino_Library.zip) library


### 6. Video / Photo

1. Slika vezave
> <img src="https://github.com/AljazKukovec/UPN_Projektna_KeyPad/blob/main/ForDocumentation/Arduino_Vezava_Slika.jpg" width="500">

2. Video delovanja
> Video delovanja Arduina in kode

https://user-images.githubusercontent.com/62301201/167813071-b80fec8b-be63-4f00-b297-f3681ea65a98.mp4

### 7. Avtorja in Mentor

1. Avtorja: 
  * Aljaž Kukovec
  * Anej Pajk
2. Mentor
  * Vasja Markič, univ. dipl. inž. elektrotehnike, prof. strokovnih modulov na Srednji tehniški in poklicni šoli Trbovlje.





