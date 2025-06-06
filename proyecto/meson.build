project('GeneradorJSONC', 'c', version : '1.0', default_options : ['c_std=c99'])

src = files(
  'src/main.c',
  'src/json.c',
  'src/cJSON.c'
)

inc = include_directories('src')

executable('mi_programa', src, include_directories : inc)
