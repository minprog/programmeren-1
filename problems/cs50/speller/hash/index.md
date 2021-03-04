# Speller: Hash

Now is the time to write a better hash function, which will immediately make your spell checker perform a lot better.

You currently have a hash function that puts every word into the same "bucket", which results in a single, very long linked list. It's incredibly slow and has none of the advantages of a hash table, but at least it works!

> If you do not have a working hash function at this point, head back to the instructions for "load" and copy the hash function that's mentioned there.

The art of hash function design is to have a good number of buckets, where each bucket contains as little words as possible, but also that the number of empty buckets doesn't get too large (but  good number of empty buckets is totally fine!).

Watch the walkthrough below to get started. We encourage you to first try a hash function based on only the first letter of the word. Make sure that everything still works as expected (maybe faster) and then try to find a hash function that's really good!

**Don't forget** to increase the number of buckets if your hash function requires so!


## Walkthrough

<div markdown="1" class="extend">
[![](walkthrough.jpg)](https://www.youtube.com/watch?v=mMj9ZmcB6ls)
</div>

[Open video on Youtube](https://www.youtube.com/watch?v=mMj9ZmcB6ls)
