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
    Wat is de straal? 42
                                        xxxxxxxxxxxxx                                    
                                   xxxxx             xxxxx                               
                                xxx                       xxx                            
                              xx                             xx                          
                           xxx                                 xxx                       
                          xx                                     xx                      
                        xx                                         xx                    
                      xx                                             xx                  
                     xx                                               xx                 
                    x                                                   x                
                   x                                                     x               
                 xx                                                       xx             
                xx                                                         xx            
               xx                                                           xx           
               x                                                             x           
              x                                                               x          
             x                                                                 x         
            x                                                                   x        
           xx                                                                   xx       
           x                                                                     x       
          x                                                                       x      
          x                                                                       x      
         x                                                                         x     
        xx                                                                         xx    
        x                                                                           x    
        x                                                                           x    
       x                                                                             x   
       x                                                                             x   
      x                                                                               x  
      x                                                                               x  
      x                                                                               x  
     x                                                                                 x 
     x                                                                                 x 
     x                                                                                 x 
     x                                                                                 x 
     x                                                                                 x 
    x                                                                                   x
    x                                                                                   x
    x                                                                                   x
    x                                                                                   x
    x                                                                                   x
    x                                                                                   x
    x                                                                                   x
    x                                                                                   x
    x                                                                                   x
    x                                                                                   x
    x                                                                                   x
    x                                                                                   x
    x                                                                                   x
     x                                                                                 x 
     x                                                                                 x 
     x                                                                                 x 
     x                                                                                 x 
     x                                                                                 x 
      x                                                                               x  
      x                                                                               x  
      x                                                                               x  
       x                                                                             x   
       x                                                                             x   
        x                                                                           x    
        x                                                                           x    
        xx                                                                         xx    
         x                                                                         x     
          x                                                                       x      
          x                                                                       x      
           x                                                                     x       
           xx                                                                   xx       
            x                                                                   x        
             x                                                                 x         
              x                                                               x          
               x                                                             x           
               xx                                                           xx           
                xx                                                         xx            
                 xx                                                       xx             
                   x                                                     x               
                    x                                                   x                
                     xx                                               xx                 
                      xx                                             xx                  
                        xx                                         xx                    
                          xx                                     xx                      
                           xxx                                 xxx                       
                              xx                             xx                          
                                xxx                       xxx                            
                                   xxxxx             xxxxx                               
                                        xxxxxxxxxxxxx

> Hoewel niet strikt nodig, vind je de volgende functies misschien handig: https://manual.cs50.io/3/sqrt & https://manual.cs50.io/3/pow