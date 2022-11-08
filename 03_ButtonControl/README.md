# 03_ButtonControl

## Aufgabenstellung

Die Aufgabe dieser Laborübung war es, ein Programm für den DiscBot zu entwickeln, welches bei einem grünen Tastendruck den DiscBot um 25 cm vorwärts bewegt. Bei einem blauen Tastendruck den DiscBot um 90° im Uhrzeigersinn und bei einem roten Tastendruck den DiscBot um 90° gegen den Uhrzeigersinn dreht.
Nach jedem Tastendruck wird die mittlere RGB-Leuchtdiode in der Farbe des Tasters bis zum Ende der Bewegung leuchten.

## Software

Nach der Init Funktion ist der ATmega2560 im Ruhezustand. Bei einem Tastendruck wird die passende Callback-Funktion aufgerufen, welche wiederum die passende Bewegungsfunktion aufruft. Diese Bewegungsfunktionen rufen die Funktionen dbMc_move/dbMc_rotate und die set color Funktion auf. Nach Ablauf der dbMc_move/dbMc_rotate Funktion wird die Stopp Funktion aufgerufen, diese Schaltet letztlich die LED aus. 


![image](https://user-images.githubusercontent.com/115406836/200565199-9f8fda65-eaf0-430e-bf04-baafef0ccf81.png)
