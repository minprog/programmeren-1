# Graph*

> Let op, deze opdracht is gemarkeerd met een `*`.

Schrijf een programma dat een tweedegraads polynoom op het scherm plot. Dit is een functie in de vorm:

    f(x) = a * x^2 + b * x + c

Zo moet het programma werken:

    $ ./graph
    What is the first coefficient? 0
    What is the second coefficient? 1
    What is the third coefficient? 0
      |                     *                                                       
      |                    *                                                        
    20|                   *                                                         
      |                  *                                                          
      |                 *                                                           
      |                *                                                            
      |               *                                                             
    15|              *                                                              
      |             *                                                               
      |            *                                                                
      |           *                                                                 
      |          *                                                                  
    10|         *                                                                   
      |        *                                                                    
      |       *                                                                     
      |      *                                                                      
      |     *                                                                       
     5|    *                                                                        
      |   *                                                                         
      |  *                                                                          
      | *                                                                           
      |*                                                                            
     0*-----------------------------------------------------------------------------
      0    5    10   15   20   25   30   35   40   45   50   55   60   65   70   75 

    $ ./graph
    What is the first coefficient? 0.004
    What is the second coefficient? 0
    What is the third coefficient? 0
      |                                                                         *   
      |                                                                       **    
    20|                                                                     **      
      |                                                                    *        
      |                                                                  **         
      |                                                                **           
      |                                                              **             
    15|                                                            **               
      |                                                          **                 
      |                                                       ***                   
      |                                                     **                      
      |                                                   **                        
    10|                                                ***                          
      |                                              **                             
      |                                           ***                               
      |                                        ***                                  
      |                                     ***                                     
     5|                                 ****                                        
      |                             ****                                            
      |                        *****                                                
      |                   *****                                                     
      |           ********                                                          
     0************------------------------------------------------------------------
      0    5    10   15   20   25   30   35   40   45   50   55   60   65   70   75 

    $ ./graph
    What is the first coefficient? -0.01
    What is the second coefficient? 0
    What is the third coefficient? 20
      |                                                                             
      |                                                                             
    20********                                                                      
      |       *****                                                                 
      |            ***                                                              
      |               ***                                                           
      |                  ***                                                        
    15|                     **                                                      
      |                       **                                                    
      |                         **                                                  
      |                           **                                                
      |                             *                                               
    10|                              **                                             
      |                                *                                            
      |                                 **                                          
      |                                   *                                         
      |                                    **                                       
     5|                                      *                                      
      |                                       *                                     
      |                                        *                                    
      |                                         **                                  
      |                                           *                                 
     0---------------------------------------------*--------------------------------
      0    5    10   15   20   25   30   35   40   45   50   55   60   65   70   75 

    $ ./graph
    What is the first coefficient? 0
    What is the second coefficient? 0
    What is the third coefficient? 2
      |                                                                             
      |                                                                             
    20|                                                                             
      |                                                                             
      |                                                                             
      |                                                                             
      |                                                                             
    15|                                                                             
      |                                                                             
      |                                                                             
      |                                                                             
      |                                                                             
    10|                                                                             
      |                                                                             
      |                                                                             
      |                                                                             
      |                                                                             
     5|                                                                             
      |                                                                             
      |                                                                             
      ******************************************************************************
      |                                                                             
     0------------------------------------------------------------------------------
      0    5    10   15   20   25   30   35   40   45   50   55   60   65   70   75 

    $ ./graph
    What is the first coefficient? 0
    What is the second coefficient? 0
    What is the third coefficient? 2.5
      |                                                                             
      |                                                                             
    20|                                                                             
      |                                                                             
      |                                                                             
      |                                                                             
      |                                                                             
    15|                                                                             
      |                                                                             
      |                                                                             
      |                                                                             
      |                                                                             
    10|                                                                             
      |                                                                             
      |                                                                             
      |                                                                             
      |                                                                             
     5|                                                                             
      |                                                                             
      ******************************************************************************
      |                                                                             
      |                                                                             
     0------------------------------------------------------------------------------
      0    5    10   15   20   25   30   35   40   45   50   55   60   65   70   75 

> Bestudeer de voorbeelden goed, ze zijn niet willekeurig gekozen.

> Iedere plot is precies 24 tekens hoog en 80 tekens breed.