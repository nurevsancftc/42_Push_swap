42 Yazılım Okulu'nda geliştirdiğim bir algoritma projesi olan Push Swap, belirli kurallar ve sınırlamalar dâhilinde bir stack yapısında tutulan sayıları, ikinci bir stack kullanarak en verimli şekilde sıralamaya odaklanmaktadır. Projenin temel amacı, A stack'inde başlangıçta bulunan tüm sayıları, B stack'ini de kullanarak minimum işlemle düzgün bir sıralama elde etmektir.

Bu projede ben Türk algoritmasını tercih ettim ve kodumu linked list yapısıyla oluşturdum. Linked list yapısını tercih etmemin en büyük nedeni, eleman ekleme ve çıkarma gibi işlemlerin bu yapıda oldukça esnek ve verimli bir şekilde gerçekleştirilebilmesidir. Aynı zamanda linked list, veri yapısı üzerinde hızlı hareket etmeyi ve elemanların yerlerini optimize etmeyi kolaylaştıran bir yapıdır.
Proje Mantığı

Push Swap projesi, temelinde basit ancak etkili bir algoritma problemidir: Veriler, belirli kurallar çerçevesinde en hızlı ve verimli şekilde sıralanmalıdır.

Elimizde bir dizi integer, 2 stack (A ve B) ve bu stack'leri manipüle etmek için bir aksiyon seti bulunmaktadır. Programın amacı, komut satırından alınan integer değerlerini push_swap aksiyonlarını kullanarak en az adımda sıralayan ve sonucunu veren bir C programı oluşturmaktır.

🛠 Kullanılan Aksiyonlar

Bu projede kullanabileceğimiz aksiyonlar şunlardır:

sa (swap a): A stack'inin en üstteki iki elemanını yer değiştirir.

sb (swap b): B stack'inin en üstteki iki elemanını yer değiştirir.

ss: sa ve sb işlemlerini aynı anda yapar.

pa (push a): B stack'inin en üstteki elemanını A stack'ine taşır.

pb (push b): A stack'inin en üstteki elemanını B stack'ine taşır.

ra (rotate a): A stack'indeki tüm elemanları bir yukarı kaydırır (ilk eleman sona gider).

rb (rotate b): B stack'indeki tüm elemanları bir yukarı kaydırır.

rr: ra ve rb işlemlerini aynı anda yapar.

rra (reverse rotate a): A stack'indeki tüm elemanları bir aşağı kaydırır (son eleman başa gelir).

rrb (reverse rotate b): B stack'indeki tüm elemanları bir aşağı kaydırır.

rrr: rra ve rrb işlemlerini aynı anda yapar.

Bu aksiyonları doğru stratejiyle kullanarak elemanları en hızlı şekilde sıralamak hedeflenmektedir.

Bu projede sadece verileri sıralamak yeterli değildir. Amacımız bu sıralamayı en az sayıda adımda başarabilmektir. Belirlenen performans kriterleri şunlardır:

100 sayıyı 700'den az işlemde sıralamak

500 sayıyı 5500'den az işlemde sıralamak

Bu hedeflere ulaşmak için stratejik hamleler, optimize edilmiş algoritma tasarımı ve verimli linked list kullanımı hayati önem taşımaktadır.
