# включити  < iostream >
використання  простору імен  std ;
int  main ( void ) {
  int n;
  cout << " Введіть число: " ;
  Спробуйте знову:
  cin >> n;
  якщо (n== 0 || n> 63 ){
   cout << " Введіть правильне число: " ;
    goto TryAgain;
  }
  cout << ' + ' ;
  for ( int i = 0 ; i < n; i++){
  cout << ' - ' ;
  }
  cout << ' + ' << endl;
  for ( int i = 0 ; i < n; i++) {
    cout << ' | ' ;
    for ( int j = 0 ; j < n; j++){
      cout << '  ' ;
    }
    cout << ' | ' << endl;
  }
  cout << ' + ' ;
  for ( int i = 0 ; i < n; i++){
    cout << ' - ' ;
  }
  cout << ' + ' << endl;
повернути  0 ;
}
