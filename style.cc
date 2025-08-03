/*------------------------------------------------This is for the navbar css--------------------------------------------------------------------------------------------------*/

.logo{
    display: flex;
    
}
.logo h2{
    font-weight: 400;
    color: rgb(0, 0, 0);   /*This is for the paw heaven logo */
}
.logo a{
   
    transition: color 0.3s;
}
.logo a h2:hover{
    color: #68bd90;
    text-decoration: underline;
    transition: color 0.3s;             /*This is for the logo hover effect*/
}

.logo img {
    
    height: 45px;
}

.logo img:hover{
    height: 50px;  /*This is for the logo hover effect*/
}

/*<---- cursor is here -------->*/
.carousel {
    min-height: 100vh;
}
.slide{
    background-color:white; 
}

.navbar {
    background-color:  #f2f2f2;
    display: flex;                     /*<--This is for the nav bar links section-->*/
    justify-content: space-around;
    align-items: center;
    overflow: hidden;
}

.nav-links a {
    color: rgb(0, 0, 0);
    text-decoration: none;
    margin: 0 20px;
    font-size: large;
    transition: color 0.3s;
}
.nav-links a:hover {
    color: #68bd90;
    font-size: larger;
}
.nav_t{
  text-decoration: none;
}
