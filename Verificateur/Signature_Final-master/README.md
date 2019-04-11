# Projet Composant

## Equipe : Naïm Bendjebbour - Yacine Aissat - Raouf Haddad - Lounes Tiouchichine

## Composant 6 - Signature

### Description

L’objectif de ce composant est double :

-> D’abord, il se charge de créer de nouvelles adresses, c’est-à-dire génère une paire de clés cryptographiques composée d’une clé privée et d’une clé publique. 
-> Ensuite, ce dernier permet aussi de signer un message avec une clé privée (dont seul l’émetteur a la connaissance) et de vérifier la signature en utilisant la clé publique correspondante.  

## Objectif
La signature permet au récepteur de l’information de s’assurer qu’elle provient bien d’un émetteur connu à l’avance.  
En d’autres termes, la signature certifie l'identité d’un émetteur d’une transaction et donc de ne pas accepter de transactions frauduleuses ou d’origine inconnue. 
En effet, le bénéficiaire, à l’aide de la clé publique fourni par l’émetteur, peut être certain de l’origine de la transaction Dans un premier temps, l'émetteur hashe la transaction puis chiffre le hashage obtenu grâce à la clé privée. 
Après cela, il envoie au destinataire la transaction, le hasha correspondant ainsi que la clé publique liée à la clé privée. 
Le récépteur déchiffre le hashage de la transaction et confirme l’origine de celle-ci. 
Il compare ensuite le hashage reçu avec le résultat du hashage de la transaction (non hashée) reçue.
 
### Signatures des méthodes
Les méthodes du composant Signature sont les suivantes :
    
    Clefs genererClefs();
    
    string signerMessage(string msg, string private_key);
    
    bool validerMessage(string msg, string public_key, string signature);
    
avec Clefs étant une classe qui contient 2 attribut de type string : 
    
    string private_key
    
    string public_key

Vous pouvez sauvegarder les 2 clés : `private_key` et `public_key` dans 2 fichiers séparés : `private.key` et `public.key` en utilisant la méthode `save()` de la classe Clefs.

### Test de génération de clef

1- Récupération du projet  :

git clone https://github.com/yacineaissat/Signature_Final

2- Dans le répertoire release lancer Composant_Signature.exe

3- Deux fichiers sont générés :   public.key et private.key

