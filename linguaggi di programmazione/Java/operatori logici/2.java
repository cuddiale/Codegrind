// Scrivi un programma Java che determini se un anno è bisestile o meno. Un anno bisestile è divisibile per 4, ma non per 100, a meno che non sia anche divisibile per 400.

int anno = 2020;
boolean bisestile = (anno % 4 == 0 && anno % 100 != 0) || anno % 400 == 0;
System.out.println("L'anno " + anno + " è bisestile? " + bisestile);