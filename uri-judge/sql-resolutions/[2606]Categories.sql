/*
*Author: Hérson Reis Rezende dos Santos
*Site: hrezend.github.io
*/

select products.id, products.name from products join categories on products.id_categories = categories.id where categories.name like 'super%';
