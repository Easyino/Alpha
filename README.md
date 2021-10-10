# Easyino Alpha
Alpha è il primo prodotto di una lunga catena di cosevarie targate Easyino. Nasce dall'idea di tre giovani ragazzi desiderosi di far conoscere il mondo dell'elettronica e programmazione alle giovani menti, abbattendo un gran numero di ostacoli che potrebbero scoraggiare chi è alle "prime armi". 

## Come mi può aiutare?
Tramite numerosi sondaggi abbiamo definito delle linee guida da seguire, per riuscire a garantire un servi... dai, non ci crede nessuno... abbiamo preso una scheda, ci abbiamo ficcato su un po' di componenti(anche male dimensionati) e mandata in produzione.

## Ma in cosa è migliore delle altre schede?
Scherzi a parte, noi siamo realmente convinti che sia un prodotto utilesia per chi inizia(semplificando notevolmente tutti i processi di cablaggio) sia per chi non ha voglia di fare ogni volta cablaggi banali ma essenziali per qualche progetto... insomma, sembrava Figo... ed è così!

## ok, basta paroloni, passiamo al concreto
Ecco una lista di **componenti** aggiunti **onboard**:
- un comodo switch per alimentare la scheda
- 4 pulsanti monostabili 
- un led RGB
- una fotoresistenza
- un microfono
- un buzzer

Ma la magia non si ferma alla scheda: per sfruttare Alpha a pieno ti consigliamo di installare la nostra libreria, per usufruire di tutte le sue funzionalità. 
I nostri sviluppatori hanno lavorato ad una libreria ricca di funzioni semplificate, tra cui:

 - `aspetta();` 

 	```
	aspetta(2000);		//aspetta 2 secondi
	```
	Si, è veramente una funzione inutile, puoi benissimo usare `delay()`, che, per quanto sia ironico è più veloce. Ha senso usare il nostro metodo solo se l'utente è un bambino che non conosce l'inglese, giusto per semplificare la lettura, tutto qui...
	>L'autore con "ironico" fa riferimento al fatto che `delay()` è pur sempre una funzione volta a rallentare il programma, quindi non si dovrebbe confrontare in termini di velocità... Lasciatelo stare, aveva voglia di dirlo e sopratutto poter utilizzare la formattazione a citazione... P.S.: Gli sta piacendo.

 - `accendi();` 

	è una funzione veramente utile, sopratutto per fare prove al volo. serve a comandare il led RGB, in maniera facile e sopratutto veloce.
	il vero punto di forza è che, essendo utilizzata su Hardware proprietario, npon si deve perdere tempo in inizializzazioni e settaggi per far accendere un cavolo di led. 
	
	La nostra funzione può essere utilizzata fornendo il valore dei tre canali RGB
 	```
	accendi(255,0,255);		//accend il led fornendo i tre canali RGB.
	```
	o più semplicemente fornendo il nome del colore
	 

 	```
	accendi(ROSA);			//accend il led fornendo il nome del colore.
	```
	>Per ora i colori supportati sono:  `ROSSO`, `VERDE`, `BLU`, `GIALLO`, `BIANCO`, `ROSA`. Aaggiungere altri colori non ha senso, tanto nessuno usa sta scheda ; ).



- `ascolta();` 

	a differenza delle precedenti è una funzione di tipo bool, quindi restituirà un valore binario. 
	restituirà 1 se il livello di rumore è superiore ad una certa soglia. 
	
 	```
	if(ascolta()){	
		//cosevarie che saranno eseguite in presenza di un rumore forte.
	}
	```
	
	>Se non risponde bene agli stimoli batti più forte ; ).
	è possibile modificarare il valore di soglia, inserendo nel setup() la funzione `calibraMicrofono();` fornendo come argomento un valore(vai ad occhio, di default è 105).




 - `livelloLuce();` 

 	```
	var = livelloLuce();		//assegno a var il livello di luce attuale
	```
	nulla di che da dire qui...

	>Per salvare automaticamente un livello di luce si può usare la funzione `registraLuce();`, per accedere poi al valore salvato su `livello_luce_salvato`.


- `suona();` 

	Nulla, la usi per riprodurre note... è abbastanza autoesplicativo...

	```
	suona(DO,250);		//suono la nota Do per 250 millisecondi.
	```
- `suonaMelodia();` 

	è una variante di `suona()`, nella quale però si possono suonare melodie. le note e durate devono essere fornite alle funzione come array di caratteri e interi, nel dubbio copia l'esempio seguente.

	```
	char* note[7] = {DO, RE, MI, FA, SOL, LA, SI};	//creo l'array di note
 	int durate[7] = {100,200,300,400,500,600,700};	//creo l'array di durate

	suona(note, durate);		//suono la melodia.
	```
	>Per inserire una pausa nella Melodia scrivi `PAUSA` al posto di una nota, e assegnaci la relativa durata.
	
- `controllaPulsanti();` 

	Serve per gestire facilmente i quattro pulsanti montati sulla scheda.  è necessario richiamarla ogni volta che devi accedere allo stato del pulsante. lo stato dei pulsanti viene salvato nelle variabili `P1Premuto` - `P4Premuto`

	```
	void loop(){
	controllaPulsanti();	//controllo lo stato dei pulsanti
	
	if(P1Premuto) {...}	//accedo allo stato del pulsante
	if(P2Premuto) {...}	//accedo allo stato del pulsante
	if(P3Premuto) {...}	//accedo allo stato del pulsante
	if(P4Premuto) {...}	//beh, non credo serva scrivere cosa sto facendo ora ;)
	
	}
	```
	
