palavra_1 = input()
palavra_2 = input()
palavra_3 = input()

if palavra_1 == 'vertebrado' and palavra_2 == 'ave' and palavra_3 == 'carnivoro':
    animal = 'aguia'
if palavra_1 == 'vertebrado' and palavra_2 == 'ave' and palavra_3 == 'onivoro':
    animal = 'pomba'

if palavra_1 == 'vertebrado' and palavra_2 == 'mamifero' and palavra_3 == 'onivoro':
    animal = 'homem'
if palavra_1 == 'vertebrado' and palavra_2 == 'mamifero' and palavra_3 == 'herbivoro':
    animal = 'vaca'

if palavra_1 == 'invertebrado' and palavra_2 == 'inseto' and palavra_3 == 'hematofago':
    animal = 'pulga'
if palavra_1 == 'invertebrado' and palavra_2 == 'inseto' and palavra_3 == 'herbivoro':
    animal = 'lagarta'

if palavra_1 == 'invertebrado' and palavra_2 == 'anelideo' and palavra_3 == 'hematofago':
    animal = 'sanguessuga'
if palavra_1 == 'invertebrado' and palavra_2 == 'anelideo' and palavra_3 == 'onivoro':
    animal = 'minhoca'

print(animal)