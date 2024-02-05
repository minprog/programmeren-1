# Cirkel

Schrijf een programma dat een cirkel uitprint. De gebruiker mag een straal opgeven. Deze straal mag niet kleiner dan 5 zijn. Vraag opnieuw om de straal als deze te klein is.

Hier wat voorbeelden:

    $ ./cirkel
    Wat is de straal? 4
    Wat is de straal? 5
       xxxxx   
      x     x  
     x       x 
    x         x
    x         x
    x         x
    x         x
    x         x
     x       x 
      x     x  
       xxxxx   

    $ ./cirkel
    Wat is de straal? 10
           xxxxxxx       
         xx       xx     
        x           x    
       x             x   
      x               x  
     x                 x 
     x                 x 
    x                   x
    x                   x
    x                   x
    x                   x
    x                   x
    x                   x
    x                   x
     x                 x 
     x                 x 
      x               x  
       x             x   
        x           x    
         xx       xx     
           xxxxxxx       

    $ ./cirkel
    Wat is de straal? 28
                           xxxxxxxxxxx                       
                       xxxx           xxxx                   
                     xxx                 xxx                 
                   xx                       xx               
                 xx                           xx             
                x                               x            
              xx                                 xx          
             xx                                   xx         
            xx                                     xx        
           xx                                       xx       
          xx                                         xx      
          x                                           x      
         x                                             x     
        x                                               x    
        x                                               x    
       x                                                 x   
       x                                                 x   
      x                                                   x  
      x                                                   x  
     xx                                                   xx 
     x                                                     x 
     x                                                     x 
     x                                                     x 
    x                                                       x
    x                                                       x
    x                                                       x
    x                                                       x
    x                                                       x
    x                                                       x
    x                                                       x
    x                                                       x
    x                                                       x
    x                                                       x
    x                                                       x
     x                                                     x 
     x                                                     x 
     x                                                     x 
     xx                                                   xx 
      x                                                   x  
      x                                                   x  
       x                                                 x   
       x                                                 x   
        x                                               x    
        x                                               x    
         x                                             x     
          x                                           x      
          xx                                         xx      
           xx                                       xx       
            xx                                     xx        
             xx                                   xx         
              xx                                 xx          
                x                               x            
                 xx                           xx             
                   xx                       xx               
                     xxx                 xxx                 
                       xxxx           xxxx                   
                           xxxxxxxxxxx

> Hoewel strikt gezien niet nodig, vind je de volgende functies misschien handig: <https://manual.cs50.io/3/sqrt> & <https://manual.cs50.io/3/pow>