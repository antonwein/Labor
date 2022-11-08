# 03_ButtonControl

## Aufgabenstellung

Die Aufgabe dieser Laborübung war es, ein Programm für den DiscBot zu entwickeln, welches bei einem grünen Tastendruck den DiscBot um 25 cm vorwärts bewegt. Bei einem blauen Tastendruck den DiscBot um 90° im Uhrzeigersinn und bei einem roten Tastendruck den DiscBot um 90° gegen den Uhrzeigersinn dreht.
Nach jedem Tastendruck wird die mittlere RGB-Leuchtdiode in der Farbe des Tasters bis zum Ende der Bewegung leuchten.

## Software

Nach der Init Funktion ist der ATmega2560 im Ruhezustand. Bei einem Tastendruck wird die passende Callback-Funktion aufgerufen, welche wiederum die passende Bewegungsfunktion aufruft. Diese Bewegungsfunktionen rufen die Funktionen dbMc_move/dbMc_rotate und die set color Funktion auf. Nach Ablauf der dbMc_move/dbMc_rotate Funktion wird die Stopp Funktion aufgerufen, diese Schaltet letztlich die LED aus. 

![RPB1QiCm38RlUWh3ReEym0wZf7FAe5kBkvrA2UwijMDU38xI7KhVVL4SF3la4c8f_wSlHekMjAVknyB-_Y2Aub4y6ul03r7ixpoQGrzRQckF-kExLcZ4Wv0NR4ZmUzaHkKPik_QC9gPE7h79SYkkn6GupMUFjiCiMlQ5cEJ390YGsR5oOgxa4qmiWbxckL9Ila8-aaqoetBzB](https://user-images.githubusercontent.com/115406836/200668383-931f449c-009b-47c6-acc1-52f2e9887dea.svg)
