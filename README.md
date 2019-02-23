# Text-Cryptography
Cryptography is the science of using mathematics to encrypt and decrypt data. Cryptography enables you to store sensitive information or transmit it across insecure networks (like the Internet) so that it cannot be read by anyone except the intended recipient

BARRACKPORE RASTRAGURU
SURENDRANATH COLLEGE
COURSE :- B.SC (PART III)
DEGREE :- Honours
SUBJECT :- CMSA
PAPER :- VII-B
BARRACKPORE RASTRAGURU
SURENDRANATH
COLLEGE
Text
Cryptography
PROLAY SAHA
ROLL: 318111103960
REGG: 1031511101280
PRATIK KUMAR DUTTA
ROLL: 318111103968
REGG: 1031511401278
AINDREE GHOSH
ROLL: 318212011663
REGG: 1031521301254
SANKALPA ROY
ROLL: 318111103962
REGG: 1031511401288 UNDER THE GUIDANCE DR: ISHITA DE GHOSH DEPARTMENT OF COMPUTER SCIENCE
P a g e | 1
CERTIFICATE
This is to certify that the project report entitled “TEXT CRYPTOGRAPHY” submitted by PROLAY SAHA (318111103960), PRATIK KUMAR DUTTA (318111103968), AINDREE GHOSH (318212011663) and SANKALPA ROY (318111103962) during the academic year 2017-2018 is a bona fide piece of work conducted under my supervision and guidance, the data source is fully acknowledged. I wish great success in all their future endeavours.
____________________________________________
PROJECT GUIDE AND HEAD OF DEPARTMENT
DEPARTMENT OF COMPUTER SCIENCE
BARRACKPORE RASTRAGURU SURENDRANATH COLLEGE
____________________________________________
EXTERNAL EXAMINER
P a g e | 2
ACKNOWLEDGEMENT
 I take this opportunity to express my profound sense of gratitude and respect to all those who helped me throughout this venture.
 I owe my regards to H.O.D of CMSA department of BRSNC, for his/her cooperation and valuable support and giving me the opportunity to undertake this project work and providing the necessary infrastructure.
 I would like to express my heartfelt thanks to my revered teacher guide DR: ISHITA DE for her valuable guidance, encouragement and support throughout my studentship under her at the institute.
 Last but not the least; I owe my overwhelming gratitude to my family and friends who gave me constant support and motivation to continue with this endeavour.
__________________________ __________________________
PROLAY SAHA PRATIK KUMAR DUTTA
ROLL NO: 318111103960 ROLL NO: 318111103968
REGG NO: 1031511101280 of 2015 REG NO: 1031511401278 of 2015
__________________________ __________________________
AINDREE GHOSH SANKALPA ROY
ROLL NO: 318212011663 ROLL NO: 318111103962
REGG NO: 1031521301254 of 2015 REGG NO: 1031511401288 of 2015
Contents page n0
CHAPTER - 1
CRYPTOGRAPHY ORIGIN 5-8
1.1 History of cryptography
1.2 Evolution of cryptography
CHAPTER - 2
MODERN CRYPTOGRAPHY 9-13
2.1 Characteristics
2.2 Context of cryptography
2.3 Security services of cryptography
2.4 Cryptography primitives
CHAPTER - 3
CRYPTOSYSTEM 14-21
3.1 Components of cryptosystem
3.2 Types of cryptosystem
3.3 Relation between encryption schemes
CHAPTER - 4
ATTACKS ON CRYPTOSYSTEMS 22-28
4.1 Cryptographic attacks
4.2 Practicality of attacks
CHAPTER - 5
CRYPTOGRAPHY TRADITIONAL CIPHERS 29-32
5.1 What is cipher
5.2 Types of cipher
5.3 Examples of cipher
Contents page n0
CHAPTER - 6
CEASER CIPHER 34-37
6.1 What is ceasar cipher
6.2 Algorithm of encryption
6.3 Sample output
CHAPTER - 7
POSITION’S SQUARE CIPHER 38-41
7.1 What is position’s square cipher
7.2 Algorithm of encryption
7.3 Sample output
CHAPTER - 8
MATRIX TRANSPOSITION CIPHER 42-45
8.1 What is transposition cipher
8.2 Algorithm of encryption
8.3 Sample output
CHAPTER - 9
RSA ALGORITHM 46-50
9.1 What is RSA algorithm
9.2 Algorithm of encryption
9.3 Sample output
CHAPTER – 10
BENEFITS AND FUTURE SCOPE 51-53
10.1 Cryptography – benefits
10.2 Future of cryptography
P a g e | 5
CHAPTER – 1
CRYPTOGRAPHY ORIGIN
P a g e | 6
1.1 History of Cryptography
The art of cryptography is considered to be born along with the art of writing. As civilizations evolved, human beings got organised in tribes, groups, kingdoms. This led the emergence of ideas such as power, battles, supremacy and politics. These ideas further fuel the natural need of people to communicate secretly with selective recipient which is turn ensured the continuous evolution of cryptography as well. The roots of cryptography are found in Roman and Egyptian civilizations.
Hieroglyph – The Oldest Cryptographic Technique
The first unknown evidence of cryptography can be traced to the use of “hieroglyph”. Some 4000 years ago, the Egyptians use to communicate by messages written in hieroglyph. This code was the secret known only to the scribes who used to transmit messages on behalf of the kings. One such hieroglyph is shown below:
P a g e | 7
Later, the scholars moved on to using simple mono alphabetic substitution ciphers during 500 to 600 BC. This involved replacing alphabets of message with order alphabets with some secret rule. This rule became a key to retrieve the message back from the garbled message.
The earlier Roman method of cryptography, popularly known as Ceaser Shift Cipher, relies on shifting the letters of a message by an agreed number (there was a common choice), the recipient of this message would then shift the letters back by the same number and obtain the original message.
B
A
R
R
A
C
K
P
O
R
E
.
Each letter is shifted by ‘2’
D
C
T
T
C
E
M
R
Q
T
G
0
Steganography
Steganography is similar but adds another dimension to Cryptography. In this method, people not only want to protect the secrecy of an information by concealing it, but they also want to make sure any unauthorized person gets no evidence that the information even exists. For example, invisible watermarking.
In steganography, an unintended recipient or an intruder is unaware of the fact that observed data contains hidden information. In cryptography, an intruder is normally aware by the circumstances.
P a g e | 8
1.2 Evolution of Cryptography
It is during and after the European renaissance, various Italian and papal states led the rapid proliferation of cryptographic techniques. Various analysis and attack techniques were searched in this era to break the secret codes.
 Improved coding techniques such as Vigenere coding came into existence in the 15th century, which offered moving letters in the message with a number of variable places instead of moving them the same number of places.
 Only after the 19th century, cryptography evolved from the ad hoc approaches to encryption to the more sophisticated art and science of information security.
 In the early 20th century, the inventions of mechanical and electromechanical machines, such as Enigma Rotor Machine, provided more advanced and means of coding the information.
 During the period of World War II, both cryptography and cryptanalysis became excessively mathematical.
With the advances taking place in this field, government organizations, military units, and some corporate houses started adopting the applications of cryptography. They used cryptography to guard their secrets from others. Now, the arrival of computers and the internet has brought effective cryptography within the reach of common people.
P a g e | 9
CHAPTER – 2
MODERN CRYPTOGRAPHY
P a g e | 10
2.1 Characteristics of Modern Cryptography
Modern cryptography is the cornerstone of computer and communications security. Its foundation is based on various concepts of mathematics such as number, theory, computational complexity theory and probability theory.
There are three major characteristics that separate modern cryptography from the classical approach.
Classic Cryptography Modern Cryptography
It manipulates traditional characters, i.e., letters and digits directly.
It manipulates on binary bit sequences.
It is mainly based on ‘security through obscurity’. The techniques employed for coding were kept secret and only the parties involved in communication knew about them.
It relies on publicly known mathematical algorithms for coding the information. Secrecy is obtained through a secrete key which is used as the seed of the algorithms. The computational difficulty of algorithms, absence of secret key, etc., make it impossible for an attacker to obtain the original information even if he knows the algorithm used for coding.
It requires the entire cryptosystem for communicating confidentially.
Modern cryptography requires parties interested in secure communication to possess the secret key only.
P a g e | 11
2.2 Context of Modern Cryptography
Cryptology, the study of cryptosystem, can be subdivided into two branches:
 Cryptography
 Cryptanalysis
What is cryptography?
Cryptography is the art and science of making a cryptosystem that is capable of providing information security. Cryptography deals with the actual securing of digital data. It refers to the design of mechanism based on mathematical algorithms that provide fundamental information security services. You can think of cryptography as the establishment of a large toolkit containing different techniques I security algorithms.
What is cryptanalysis?
The art and science of breaking the cipher text is known as cryptanalysis. Cryptanalysis is the sister branch of cryptography and they both co-exist. The cryptographic process results in the cipher text for transmission or storage. It involves the study of cryptographic mechanism with the intention to break them. Cryptanalysis is also used during the design of the new cryptographic techniques to test their security strengths.
Note: Cryptography concerns with the design of cryptosystems, while cryptanalysis studies the breaking of cryptosystems.
Cryptology
Cryptography
Cryptanalysis
P a g e | 12
2.3 Security Services of Cryptography
The primary objective of using cryptography is to provide the following four fundamental information security services. Let us now see the possible goals intended to be fulfilled by cryptography.
Confidentiality
 Confidentiality is the fundamental security service provided by cryptography. It is a security service that keeps the information from an unauthorized person. It is sometimes to as privacy or secrecy. Confidentiality can be achieved through numerous means starting from physical securing to the use of mathematical algorithms for data encryption.
Authentication
 Authentication provides the identification of the originator. It confirms to the receiver that the data received has been sent only by an identified and verified sender. Authentication service has two variants.
 Message authentication identifies the originator of the message without any regard router or system that has sent the message.
 Entity authentication is assurance that data has been received from a specific entity, say a particular website.
 Apart from the originator, the authentication may also provide assurance about other parameters related to date such as the date and time of creation/transmission.
Non-repudiation
 It is a security service that ensures that an entity cannot refuse the ownership of a previous commitment or an action .It is an assurance that the original creator of the data cannot deny the creation or transmission of the said data to a recipient or third party. Non repudiation is a property that is most desirable in situation where there are chances of a dispute over the exchange of data. For example, once an order is placed electronically, a purchaser cannot deny the purchase order, if non-repudiation service was enabled in this transaction.
P a g e | 13
2.4 Cryptography Primitives
Cryptography primitives are nothing but the tools and techniques in cryptography that can be selectively used to provide a set of desired security services:
 Encryption
 Hash Functions
 Message Authentication Codes
 Digital Signatures
The following table shows the primitives that can achieve a particular security service on their own. Primitives Service Encryption Hash Function MAC Digital Signature
Confidentiality
Yes
No
No
No
Integrity
No
Sometimes
Yes
Yes
Authentication
No
No
Yes
Yes
Non Reputation
No
No
Sometimes
Yes
Note: Cryptographic primitives are intricately related and they are often combined to achieve a set of desired security services from a cryptosystems.
P a g e | 14
CHAPTER – 3
CRYPTOSYSTEM
P a g e | 15
3.1 Components of Cryptosystem
Let us discuss a simple model of a cryptosystem that provides confidentiality to the information being transmitted. This basic model is depicted in the illustration below:
Encryption key Decryption key
Plain text Cipher text plain text
The illustration shows a sender who wants to transfer some sensitive data to a receiver in such a way that any party intercepting or eavesdropping on the communication channel cannot extract data.
The objective of this simple cryptosystem is that at the end of the process, only the sender and the receiver will know the plaintext.
Sender
Interceptor
Encryption algorithm
Decryption algorithm
receiver
P a g e | 16
The various components of various cryptosystem are as follows:
 Plaintext. It is the data to be protected during transmission.
 Encryption Algorithm. It is a mathematical process that produces a cipher text for any given plaintext and encryption key. It is a cryptographic algorithm that takes plaintext and an encryption key as input and produces a cipher text.
 Cipher text. It is the scrambled version of the plaintext produced by the encryption algorithm using a specific encryption key. The cipher text is not guarded. It flows on public channel. It can be intercepted or compromised by anyone who has access to the communication channel.
 Decryption Algorithm. It is a mathematical process, that produces a unique plaintext for any given cipher text and decryption key. It is a cryptographic algorithm that takes a cipher text and a decryption key as input , and outputs a plaintext. The decryption algorithm essentially reverses the encryption algorithm and is thus closely related to it.
 Encryption Key. It is a value that is known to the sender. The sender inputs the encryption key into the encryption algorithm along with the plaintext in order to compute the cipher text.
 Decryption Key. It is a value that is known to the receiver. The decryption key is related to the encryption key, but is not always identical to it. The receiver inputs the decryption key into the decryption algorithm along with the cipher text in order to compute the plaintext.
For a given cryptosystem, a collection a collection of all possible decryption key is called a key space. An Interceptor (an attacker) is an unauthorized entity who attempts to determine the plaintext. He can see the cipher text and may know the decryption algorithm. He however, must never know the decryption key.
P a g e | 17
3.2 Types of Cryptosystems
Fundamentally, there are two types of cryptosystems based on the manner in which encryption-decryption is carried out in the system:
 Symmetric Key Encryption
 Asymmetric Key Encryption
The main difference between these cryptosystems is the relationship between the encryption and the decryption key. Logically, in any cryptosystem, both the keys are closely associated. It is practically impossible to decrypt the cipher text with the key that is unrelated to the encryption key.
Symmetric Key Encryption
The encryption process where same keys are used for encrypting and decrypting the information is known as symmetric key encryption. The study of symmetric cryptosystems is referred to as symmetric cryptography. Symmetric cryptosystems are also sometimes referred to as secret key cryptosystem. A few well-known examples of symmetric key encryption methods are: Digital Encryption Standard (DES), Triple –DES (3DES), IDEA and BLOWFISH.
Sender Secure Distribution Method Receiver
Cipher Text
Insecure Communication
Channel
Shared secret (key)
Shared secret (key)
Encrypt
Decrypt
Plain text
Plain text
P a g e | 18
Prior to 1970, all cryptosystems employed symmetric key encryption. Even today, its relevance is very high and it is being used extensively in many cryptosystems. It is very unlikely that this encryption will fade away, as it is has certain advantages over asymmetric key encryption.
The salient features of cryptosystems based on symmetric key encryption are:
 Persons using symmetric key encryption must share a common key prior to exchange of information.
 Keys are recommended to be changed regularly to prevent any attack on the system.
 A robust mechanism needs to exist to exchange the key between the communicating parties. As keys are required to be changed regularly, this mechanism becomes expensive and cumbersome.
 In a group of n people to enable two-party communication between any two persons, the number of keys required for group is n * (n-1)/2.
 Length of key (number of bits) in this encryption is smaller and hence, process of encryption and decryption is faster than asymmetric key encryption.
 Processing power of computer system required to run symmetric algorithm is less.
Challenge of Symmetric Key Encryption
There are two restrictive challenges of employing symmetric key cryptography.
 Key establishment – Before any communication, both the sender and the receiver need to agree on a secret symmetry key. It requires a secure key establishment mechanism in place.
 Trust issue – Since the sender and the receiver use the same symmetry key, there is an implicit requirement that the sender and the receiver ‘trust’ each other. For example, it may happen that the receiver has lost the key to an attacker and the sender is not informed.
These two challenges are highly restarting for modern day communication. Today, people need to exchange information with non-familiar and non-trusted parties.
P a g e | 19
Asymmetric Key Encryption
The encryption process where different keys are used for encrypting and decrypting the information is known as Asymmetric key encryption. Though the keys are different, they are mathematically related and hence, retrieving the plain text by decrypting cipher text is feasible. The process is depicted in the following illustration:
Asymmetric Key Encryption was invented in the 20th century to come over the necessity of pre-shared secret key between communicating persons. The salient features of encryption scheme are as follows:
 Every user in this system needs to have a pair of dissimilar keys, private key and public key. These keys are mathematically related − when one key is used for encryption, the other can decrypt the cipher text back to the original plaintext.
 It requires to put the public key in public repository and the private key as a well-guarded secret. Hence, this scheme of encryption is also called Public Key Encryption.
P a g e | 20
 Though public and private keys of the user are related, it is computationally not feasible to find one from another. This is a strength of this scheme.
 When Host1 needs to send data to Host2, he obtains the public key of Host2 from repository, encrypts the data, and transmits.
 Host2 uses his private key to extract the plaintext.
 Length of Keys (number of bits) in this encryption is large and hence, the process of encryption-decryption is slower than symmetric key encryption.
 Processing power of computer system required to run asymmetric algorithm is higher.
Symmetric cryptosystems are a natural concept. In contrast, public-key cryptosystems are quite difficult to comprehend.
You may think, how can the encryption key and the decryption key are ‘related’, and yet it is impossible to determine the decryption key from the encryption key? The answer lies in the mathematical concepts. It is possible to design a cryptosystem whose keys have this property. The concept of public-key cryptography is relatively new. There are fewer public-key algorithms known than symmetric algorithms.
Challenge of public key cryptosystem
Public-key cryptosystems have one significant challenge − the user needs to trust that the public key that he is using in communications with a person really is the public key of that person and has not been spoofed by a malicious third party.
This is usually accomplished through a Public Key Infrastructure (PKI) consisting a trusted third party. The third party securely manages and attests to the authenticity of public keys. When the third party is requested to provide the public key for any communicating person X, they are trusted to provide the correct public key.
The third party satisfies itself about user identity by the process of attestation, notarization, or some other process − that X is the one and only, or globally unique, X. The most common method of making the verified public keys available is to embed them in a certificate which is digitally signed by the trusted third party.
P a g e | 21
3.3 Relation Between Encryption Schemes
A summary of basic key properties of two types of cryptosystems is given below:
Symmetric Cryptosystems Public Key Cryptosystems Relation between Keys
Same
Different, but mathematically related Encryption Key
Symmetric
Public Decryption Key
Symmetric
Private
Due to the advantages and disadvantage of both the systems, symmetric key and public-key cryptosystems are often used together in the practical information security systems.
P a g e | 22
CHAPTER – 4
ATTACKS ON CRYPTOSYSTEM
P a g e | 23
4.1 Relation between encryption schemes
In the present era, not only business but almost all the aspects of human life are driven by information. Hence, it has become imperative to protect useful information from malicious activities such as attacks. Let us consider the types of attacks to which information is typically subjected to.
Attacks are typically categorized based on the action performed by the attacker. An attack, thus, can be passive or active.
Passive Attacks
The main goal of a passive attack is to obtain unauthorized access to the information. For example, actions such as intercepting and eavesdropping on the communication channel can be regarded as passive attack.
These actions are passive in nature, as they neither affect information nor disrupt the communication channel. A passive attack is often seen as stealing information. The only difference in stealing physical goods and stealing information is that theft of data still leaves the owner in possession of that data. Passive information attack is thus more dangerous than stealing of goods, as information theft may go unnoticed by the owner.
Active Attacks
An active attack involves changing the information in some way by conducting some process on the information. For example,
 Modifying the information in an unauthorized manner.
 Initiating unintended or unauthorized transmission of information.
 Alteration of authentication data such as originator name or timestamp associated with information
 Unauthorized deletion of data.
 Denial of access to information for legitimate users (denial of service).
Cryptography provides many tools and techniques for implementing cryptosystems capable of preventing most of the attacks described above.
P a g e | 24
Passive Attack Diagram
Active Attack Diagram
P a g e | 25
Availability of Cipher text
We know that once the plaintext is encrypted into cipher text, it is put on unsecure public channel (say email) for transmission. Thus, the attacker can obviously assume that it has access to the cipher text generated by the cryptosystem.
Availability of Plaintext and Cipher text
This assumption is not as obvious as other. However, there may be situations where an attacker can have access to plaintext and corresponding cipher text. Some such possible circumstances are:
 The attacker influences the sender to convert plaintext of his choice and obtains the cipher text.
 The receiver may divulge the plaintext to the attacker inadvertently. The attacker has access to corresponding cipher text gathered from open channel.
 In a public-key cryptosystem, the encryption key is in open domain and is known to any potential attacker. Using this key, he can generate pairs of corresponding plaintexts and cipher texts.
Cryptographic Attacks
The basic intention of an attacker is to break a cryptosystem and to find the plaintext from the cipher text. To obtain the plaintext, the attacker only needs to find out the secret decryption key, as the algorithm is already in public domain.
Hence, he applies maximum effort towards finding out the secret key used in the cryptosystem. Once the attacker is able to determine the key, the attacked system is considered as broken or compromised.
Based on the methodology used, attacks on cryptosystems are categorized as follows:
 Cipher text Only Attacks (COA)
In this method, the attacker has access to a set of cipher text(s). He does not have access to corresponding plaintext. COA is said to be successful when the corresponding plaintext can be determined from a given set of cipher text. Occasionally, the encryption key can be determined from this attack. Modern cryptosystems are guarded against cipher text-only attacks.
P a g e | 26
 Known Plaintext Attack (KPA)
In this method, the attacker knows the plaintext for some parts of the cipher text. The task is to decrypt the rest of the cipher text using this information. This may be done by determining the key or via some other method. The best example of this attack is linear cryptanalysis against block ciphers.
 Chosen Plaintext Attack (CPA)
In this method, the attacker has the text of his choice encrypted. So he has the cipher text-plaintext pair of his choice. This simplifies his task of determining the encryption key. An example of this attack is differential cryptanalysis applied against block ciphers as well as hash functions. A popular public key cryptosystem, RSA is also vulnerable to chosen-plaintext attacks.
 Dictionary Attack
This attack has many variants, all of which involve compiling a ‘dictionary’. In simplest method of this attack, attacker builds a dictionary of cipher texts and corresponding plaintexts that he has learnt over a period of time. In future, when an attacker gets the cipher text, he refers the dictionary to find the corresponding plaintext.
 Brute Force Attack (BFA)
In this method, the attacker tries to determine the key by attempting all possible keys. If the key is 8 bits long, then the number of possible keys is 28 = 256. The attacker knows the cipher text and the algorithm, now he attempts all the 256 keys one by one for decryption. The time to complete the attack would be very high if the key is long.
P a g e | 27
 Birthday Attack
This attack is a variant of brute-force technique. It is used against the cryptographic hash function. When students in a class are asked about their birthdays, the answer is one of the possible 365 dates. Let us assume the first student's birthdate is 3rd Aug. Then to find the next student whose birthdate is 3rd Aug, we need to enquire 1.25*√365 ≈ 25 students. Similarly, if the hash function produces 64 bit hash values, the possible hash values are 1.8x1019. By repeatedly evaluating the function for different inputs, the same output is expected to be obtained after about 5.1x109 random inputs. If the attacker is able to find two different inputs that give the same hash value, it is a collision and that hash function is said to be broken.
 Man in Middle Attack (MIM)
The targets of this attack are mostly public key cryptosystems where key exchange is involved before communication takes place.
 Host A wants to communicate to host B, hence requests public key of B.
 An attacker intercepts this request and sends his public key instead.
 Thus, whatever host A sends to host B, the attacker is able to read.
 In order to maintain communication, the attacker re-encrypts the data after reading with his public key and sends to B.
 The attacker sends his public key as A’s public key so that B takes it as if it is taking it from A.
 Side Channel Attack (SCA)
This type of attack is not against any particular type of cryptosystem or algorithm. Instead, it is launched to exploit the weakness in physical implementation of the cryptosystem.
P a g e | 28
 Timing Attacks
They exploit the fact that different computations take different times to compute on processor. By measuring such timings, it is be possible to know about a particular computation the processor is carrying out. For example, if the encryption takes a longer time, it indicates that the secret key is long.
 Power Analysis Attacks
These attacks are similar to timing attacks except that the amount of power consumption is used to obtain information about the nature of the underlying computations.
 Fault analysis Attacks
In these attacks, errors are induced in the cryptosystem and the attacker studies the resulting output for useful information.
4.2 Practicality of Attacks
The attacks on cryptosystems described here are highly academic, as majority of them come from the academic community. In fact, many academic attacks involve quite unrealistic assumptions about environment as well as the capabilities of the attacker. For example, in chosen-cipher text attack, the attacker requires an impractical number of deliberately chosen plaintext-cipher text pairs. It may not be practical altogether.
Nonetheless, the fact that any attack exists should be a cause of concern, particularly if the attack technique has the potential for improvement.
P a g e | 29
CHAPTER – 5
CRYPTOGRAPHY
TRADITIONAL CIPHERS
P a g e | 30
In the second chapter, we discussed the fundamentals of modern cryptography. We equated cryptography with a toolkit where various cryptographic techniques are considered as the basic tools. One of these tools is the Symmetric Key Encryption where the key used for encryption and decryption is the same.
In this chapter, we discuss this technique further and its applications to develop various cryptosystems.
5.1 What is Cipher? A cipher (pronounced SAI-fuhr) is any method of encrypting text (concealing its readability and meaning). It is also sometimes used to refer to the encrypted text message itself although here the term cipher text is preferred. Its origin is the Arabic sifr, meaning empty or zero. In addition to the cryptographic meaning, cipher also means (1) someone insignificant, and (2) a combination of symbolic letters as in an entwined weaving of letters for a monogram. Some ciphers work by simply realigning the alphabet (for example, A is represented by F, B is represented by G, and so forth) or otherwise manipulating the text in some consistent pattern. However, almost all serious ciphers use both a key (a variable that is combined in some way with the unencrypted text) and an algorithm (a formula for combining the key with the text). A block cipher is one that breaks a message up into chunks and combines a key with each chunk (for example, 64-bits of text). A stream cipher is one that applies a key to each bit, one at a time. Most modern ciphers are block ciphers. In cryptography, a cipher (or cypher) is an algorithm for performing encryption or decryption—a series of well-defined steps that can be followed as a procedure. An alternative, less common term is encipherment. To encipher or encode is to convert information into cipher or code. In common parlance, "cipher" is synonymous with "code," as they are both a set of steps that encrypt a message; however, the concepts are distinct in cryptography, especially classical cryptography.
P a g e | 31
5.2 Types of cipher There are a variety of different types of encryption. Algorithms used earlier in the history of cryptography are substantially different from modern methods, and modern ciphers can be classified according to how they operate and whether they use one or two keys. Historical Historical pen and paper ciphers used in the past are sometimes known as classical ciphers. They include simple substitution ciphers (such as Rot 13) and transposition ciphers (such as a Rail Fence Cipher). For example, "GOOD DOG" can be encrypted as "PLLX XLP" where "L" substitutes for "O", "P" for "G", and "X" for "D" in the message. Transposition of the letters "GOOD DOG" can result in "DGOGDOO". These simple ciphers and examples are easy to crack, even without plaintext-cipher text pairs.[4] Simple ciphers were replaced by polyalphabetic substitution ciphers (such as the Vigenere) which changed the substitution alphabet for every letter. For example, "GOOD DOG" can be encrypted as "PLSX TWF" where "L", "S", and "W" substitute for "O". With even a small amount of known or estimated plaintext, simple polyalphabetic substitution ciphers and letter transposition ciphers designed for pen and paper encryption are easy to crack. It is possible to create a secure pen and paper cipher based on a one-time pad though, but the usual disadvantages of one-time pads apply. During the early twentieth century, electro-mechanical machines were invented to do encryption and decryption using transposition, polyalphabetic substitution, and a kind of "additive" substitution. In rotor machines, several rotor disks provided polyalphabetic substitution, while plug boards provided another substitution. Keys were easily changed by changing the rotor disks and the plug board wires. Although these encryption methods were more complex than previous schemes and required machines to encrypt and decrypt, other machines such as the British Bombe were invented to crack these encryption methods. Modern Modern encryption methods can be divided by two criteria: by type of key used, and by type of input data. By type of key used ciphers are divided into:  symmetric key algorithms (Private-key cryptography), where the same key is used for encryption and decryption, and
P a g e | 32
 Asymmetric key algorithms (Public-key cryptography), where two
different keys are used for encryption and decryption.
In a symmetric key algorithm (e.g., DES and AES), the sender and
receiver must have a shared key set up in advance and kept secret
from all other parties; the sender uses this key for encryption, and
the receiver uses the same key for decryption. The Feistel
cipher uses a combination of substitution and transposition
techniques. Most block cipher algorithms are based on this
structure. In an asymmetric key algorithm (e.g., RSA), there are
two separate keys: a public key is published and enables any
sender to perform encryption, while a private key is kept secret by
the receiver and enables only him to perform correct decryption.
Ciphers can be distinguished into two types by the type of input data:
 block ciphers, which encrypt block of data of fixed size, and
 stream ciphers, which encrypt continuous streams of data
5.3 Examples of cipher
 Ceaser Cipher
 Shift Cipher
 Additive
 Multiplicative
 Affine (Additive + Multiplicative)
 Playfair Cipher
There are several type of algorithm for cryptography. But we use 4-different
type of algorithm in our project.
 Caesar Cipher
 Position’s Square
 Matrix Transposition Cipher
 RSA Algorithm
P a g e | 33
P a g e | 34
CHAPTER – 6
CEASAR CIPHER
P a g e | 35
6.1 What is Ceasar cipher?
It is a mono-alphabetic cipher wherein each letter of the plaintext
is substituted by another letter to form the cipher text. It is a simplest form of
substitution cipher scheme. This cryptosystem is generally referred to as the
Shift Cipher.
Process of ceasar cipher
 First of all we have a plain text. We add a specific value (KEY) to each of
the letter.
 After generating the cipher we send this and receiver will received the
message.
 Receiver will decrypt the message and get original messege.
Cipher text alphabet for a Shift of 3
Na
me
1 2 3 4 5 6 7 8 9 1
0
1
1
1
2
1
3
1
4
1
5
1
6
1
7
1
8
1
9
2
0
2
1
2
2
2
3
2
4
2
5
2
6
Plai
n
text
a b c D e f g h i j k l m n o p q r s t u v w x y z
Cip
her
text
D E F G H I J K L M N O P Q R S T U V W X Y Z A B C
P a g e | 36
6.2 Algorithm for Encryption
Input - A plain message is produced and a ‘key’ is given.
Output - Cipher text is generated by using ‘key’.
Data Structure used - A character type array is used.
Step - start
Print "enter the message: "
Read message
Print " enter the key value: "
Raed key
Set L=length of (message)
Set i=0
While(i< l)
Begin
Set x=(int)mess[i]
Set x=(x+key)
Set result[i]=(char)x;
End while
End
P a g e | 37
6.3 Sample Output
P a g e | 38
CHAPTER – 7
POSITION’S SQUARE
CIPHER
P a g e | 39
7.1 What is Position’s square cipher ?
It is also a mono-alphabetic cipher wherein each letter of the plaintext is
substituted by another letter to form the cipher text. It is a simplest form of
substitution cipher scheme. This cryptosystem is generally referred to as the
Shift Cipher.
Process OF Position’s Square
The text describes the same process mathematically and much more
simply:
C = P + I2
Where
P = alphabetic position of plaintext character
I = position of character
C = alphabetic position of cipher character
0 1 2 3 4
m a d a m
=(‘m’+ 0
2
)=m =(‘a’+ 1
2
)=b =(‘d’+ 2
2
)=h =(‘a’+ 3
2
)=j =(‘m’+ 4
2
)=c
m b h j c
Cipher Text of the word madam
P a g e | 40
7.2 Algorithm for Encryption
Input - A plain message is produced
Output - Cipher text is generated by using ‘position’s square of each character’
Data Structure used - A character type array is used
Step - start
Print "enter the message: "
Read message
Set L=length of (message)
Set i=0
While(i< l)
Begin
Set x=(int)mess[i]
Set x=(x+Square(i) ) //Square() calculate square
Set result[i]=(char)x;
End while
End
P a g e | 41
7.3 Sample Output
P a g e | 42
CHAPTER – 8
MATRIX TRANSPOSITION
CIPHER
P a g e | 43
8.1 What is transposition cipher ?
The plain text is not replaced here. The pain text is written horizontally
and the Cipher text is read vertically. At the time of Decryption the process is
reversed. It is another type of cipher where the order of the alphabets in the
plaintext is rearranged to create the cipher text.
Process of Transposition Cipher
 The actual plaintext alphabets are not replaced
 Plaintext is written horizontally with a certain alphabet width. Then the
ciphertext is read vertically
 At the time of decryption the reverse procedure is followed
1 2 3 4 5
A l l t
e a c h e
r g i v
e g o o
d m a r
k s
Cipher Text of All teachers give us good marks
P a g e | 44
8.2 Algorithm for Encryption
Input - A plain message is produced.
Output - Cipher text is generated by using Transposition Cipher.
Data Structure used - A character type 2D array is used.
Step - start
Print "enter the message: "
Read message
Set L=length of (message)
While(L>0)
start
Set count=count+L
Print_into_filr(string,fp)
End while
File_close(fp)
Creation of ‘array’ at runtime
Set fp=file_open("transposition.txt","read mode")
Set i=0
Set j=0
while((ch=fgetc(fp))!=EOF)
start
set array[i*5+j]=ch;
set j=j+1
if [ j==5]
then
set i=i+1
set j=0
end if
end while
print "\n\nThe encrypted version is\n"
set k=0
While(k<i)
begin
set j=0
While(j<5)
begin
print "%c",array[j*i+k]
set j=j+1
end while
Set k=k+1
Print "\n"
P a g e | 45
End while
printf("\n\nThe decrypted version is\n");
set k=0
While(k<i)
begin
set j=0
While(j<5)
begin
print "%c",array[k*5+j]
set j=j+1
end while
Set k=k+1
End while
Stop
8.3 Sample Output
P a g e | 46
CHAPTER – 9
RSA (Rivest Shamir Adelman)
ALGORITHM
P a g e | 47
9.1 What is Rivest Shamir Adelman (RSA) Algorithm ?
This cryptosystem is one the initial system. It remains most
employed cryptosystem even today. The system was invented by three
scholars Ron Rivest Adi Shamir, and Len Adleman and hence, it is termed
as RSA cryptosystem.
Process of RSA Method
 Choose two large prime numbers p, q.
 (e.g., 1024 bits each)
 Compute n = pq, z = (p-1)(q-1)
 Choose e (with e<n) that has no common factors
 with z. (e, z are “relatively prime”).
 Choose d such that ed-1 is exactly divisible by z.
 (in other words: ed mod z = 1 ).
 Public key is (n,e). Private key is (n,d).
 To Encrypt : c=me mod n
 To Decrypt : m= cd mod n
Message: m=3
Chose 2 random prime numbers: p=19 , q=13
n = pq, n= 247
Chose e , e(encryption key)=7
Compute ‘d’ (decryption key)(private key)
d=e -1 mod (p-1)(q-1)=(19-1)(13-1)/7=31 (Round up)
Public Key=(n,e)=(247,7)
To Encrypt : c=me mod n => c= 37 mod 247
c=211 (cipher text)
To Decrypt : m= cd mod n => m= 21131 mod 247
m= 3 (Plaintext)
P a g e | 48
9.2 Algorithm for Encryption
Input - A plain message is produced.
Output - Cipher text is generated by using ‘RSA Method’.
Data Structure used -A character type array is used.
Step - start
Print "\nEnter first prime number:- "
Read p
Print "\nEnter another prime number:- "
Read q
Print "\nPlease enter the message:---\n"
Read msg //get message from user to encript or decript
for (i=0;msg[i]!='\0';i++)
begin
set m[i]=msg[i];
end for
n=p*q; // where p and q are large prime
t=(p-1)*(q-1);
ce()
print "\nThe possible values of 'e' And 'd' are:---------\n"
for i=0 to i<j-2
print e[i],d[i]
encrypt()
decrypt()
stop
void ce() //a function to find the key for encryption
start
int k
set k=0
for i=2 to i=t-2 // t=(p-1)*(q-1)
start
if [ t%i==0 ]
then
continue
end if
flag=prime(i); //check prime or not
if [ flag==1 && i!=p && i!=q ]
start
set e[k]=i
set flag=cd(e[k])
if(flag>0)
P a g e | 49
then
set d[k]=flag
set k=k+1
end if
if(k==99)
then
break
end if
end if
end for
end
long int cd(long int x)
begin
set long int k=1
while(1)
start
set k=k+t;
if(k%x==0)
then
return(k/x)
end if
end while
end
void encrypt()
start
long int pt,ct,key=e[0],k,len //only e[0] is used as encryption key
set i=0
set len=strlen(msg)
while(i!=len)
begin
set pt=m[i]
set pt=pt-96
set k=1
for j=0 to j=key-1
begin
set k=k*pt
set k=k%n
end for
set temp[i]=k
set ct=k+96
set en[i]=ct
set i=i+1
end while
set en[i]=-1
print "\nThe Encrypted message:--------------\n"
for (i=0;en[i]!=-1;i++)
print en[i]
stop
P a g e | 50
void decrypt()
start
long int pt,ct,key=d[0],k //only d[0] is used as decryption key
set i=0
While(en[i]!=-1)
begin
set ct=temp[i]
set k=1;
for (j=0;j<key;j++)
begin
set k=k*ct
set k=k%n
end
set pt=k+96
set m[i]=pt
set i=i+1
end while
set m[i]=-1
print "\nThe Decrypted message is:---\n"
for (i=0;m[i]!=-1;i++)
begin
print m[i]
stop
End While
End
9.3 Sample Output
P a g e | 51
CHAPTER – 10
CRYPTOGRAPHY- BENEFITS AND
FUTURE SCOPE
P a g e | 52
Nowadays, the networks have done global and information
has taken the digital form of bits and bytes. Critical information now gets
stored, processed and transmitted in digital from on computer systems and
open communication channels.
Since information plays such a vital role, adversaries are
targeting the computer systems and open communication channels to either
steal the sensitive information or to disrupt the critical information system.
Modern cryptography provides a robust set of techniques to
ensure that the malevolent intentions of the adversary are thwarted while
ensuring the legitimate users get access to information. Here, in this chapter,
we will discuss the benefits that we draw from cryptography, as well as the
future of cryptography.
10.1 Cryptography – Benefits
Cryptography is an essential information security tool. It provides the four
most basic services of information security:
 Confidentiality – Encryption technique can guard the information and
communication from unauthorized revelation and access of information.
 Authentication – The cryptographic techniques such as MAC and digital
signatures can protect information against spoofing and forgeries.
 Data integrity – The cryptographic hash functions are playing vital role in
assuring the users about the data integrity.
 Non – repudiation – The digital signatures provides the non –
repudiation service to guard the dispute that may arise due to denial of
passing message by the sender.
All these fundamental services offered by cryptography has enabled the
conduct of business over the networks using the computer system in
extremely efficient and effective manner.
P a g e | 53
10.2 Future of Cryptography
Elliptic Curve Cryptography (ECC) has already been invented but its
advantages and disadvantages are not yet fully understood. ECC allows to
perform encryption and decryption in a drastically lesser time, thus allowing a
higher amount of data to be passed with equal security . However, as other
methods of encryption , ECC must also be treated and proven secure before it
is accepted for governmental , commercial , and private use.
Quantum computation is the new phenomenon. While modern
computers store data using binary format called a “bit” in which a “1” or a “0”
can be stored; a quantum computer stores data using a quantum superposition
of multiple states. These multiple valued states are stored in “quantum bits” or
“qubits”. This allows the computation of numbers to be several orders of
magnitude faster than traditional transistor processors. To comprehend the
power of quantum computer, consider RSA-640, a number with 193 digits ,
which can be factored by eighty 2.2 GHz computers over than span of 5
months, one quantum computer would factor in less than 17 seconds.
Numbers that would typically take billions of years to compute could only take
a matter of hours or even minutes with a fully developed quantum computer.
In view of these facts, modern cryptography will have to look for
computationally harder problems or devise completely new techniques of
archiving the goals presently served by modern cryptography.
P a g e | 54
References
Resources are the means we use to achieve project objectives.
Regarding this project , we gather basic ideas and information from
various books , pdfs and wikipedia.
This resources are following-
BOOKS:
 “Forouzan, B. A., Cryptography and Network Security,
New Delhi, The McGraw Hill, 2007
 Stallings W. Cryptography and Network Security Fourth
edition, USA, Prentice Hall, 2005
PDFs:
 Cryptography- University of Cambridge Computer
Laboratory
 Cryptography: An Introduction – UMD department of
Computer Science
 Basics of Cryptography – Fisher College of Business
 Cryptography and Data Security - Denning
Links:
https://en.m.wikipedia.org/wiki/Cryptography
last access on 09/02/2018
https://www.techopedia.com/definition/1770/cryptography
last access on 12/02/2018
--------------------
