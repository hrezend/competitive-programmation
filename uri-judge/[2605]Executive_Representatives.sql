/*
*Author: Hérson Reis Rezende dos Santos
*Site: hrezend.github.io
*/
select products.name, providers.name from products join providers on products.id_providers = providers.id and products.id_categories = 6;
