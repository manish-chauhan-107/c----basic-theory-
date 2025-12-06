#syntex call by value :

function decleration
return_type function_name(data_type, data_type);

function defination
return_type function_name(data_type a, data_type b) {
    // code
}

function call 
function_name(x, y);


#syntex call by reference :

function decleration
return_type function_name(data_type *var1, data_type *var2);

function defination
return_type function_name(data_type *var1, data_type *var2) {
    // use pointers
    // example: *var1 = *var1 + 5;
}

function call 
function_name(&x, &y);   // passing address → call by reference
