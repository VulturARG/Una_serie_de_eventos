/*******************************************************************************
                          Realizado por |ArgA|MIV
*******************************************************************************/

#define NAME "Sacrificio"                           // Colocar nombre de mision
#define COMPLETE_NAME "Sacrificio v1"               // Nombre y versión de la misión
#define IMAGE "imgs\portada_SAC.jpg"                // Colocar nombre y extension de la imagen de portada, ej "imgs\portada.jpg"
#define DESCRIPTION "El último sacrificio..."       // Colocar descripcion de la mision entre las comillas

AUTHOR = "Shaggy - Vultur";                         // Editor (Pone tu nombre)
AUTHOR_UID = ["76561198030188168","76561198010777357"];// Colocar entre las comillas el numero que aparece en la lista de abajo. Si son mas de un autor poner con la forma ["nro 1", "nro 2"]
                                                    // Axel: 76561198869072681, Camello: 76561198197706543, Ignacio: 76561198026915573, Joaco: 76561198090717772, Maxi: 76561198091139370, Maxtor: 76561198824233052, Nico: 76561198077670923, Night: 76561198090664588, Nogo: 76561198849038806, Ñato: 76561199027826936, Paco: 76561198030163544, Peta: 76561198279642154, Roke: 76561198883929795, Shaggy: 76561198030188168, Soda: 76561198122043854, Vultur: 76561198010777357, Zorro: 76561198027580786

IMG_LOGO = "imgs\logoArgA.jpg";                     // Nota: Las imagenes deberian estar en
COLOR_AUTOR = "#76a8f7";                            // formato .paa y en proporcion 2x1 (1024x512)
ES_CAMPANIA = 1;                                    // tamaño logo: 323px x 323px
NOMBRE_CAMPANIA = "Una Serie de Eventos...";
INTRO_PERSONALIZADA = 1;                            // 1 Si la deseas cargar una intro personalizada (propia)
                                                    // y en el parametro INTRO la dirección del archivo entre comillas
                                                    // EJ. INTRO_PERSONALIZADA = 1; INTRO = "scripts\intro_propia.sqf";
INTRO = "scripts\intro_campania.sqf";               // Intros: 1 y 2. Para desactivar: 0

//INTRO_PERSONALIZADA = 0;
//INTRO = 0;

MAX_DIST_VISION = 2000;
MIN_DIST_VISION =  1300;                            // Distancia de visión reducida por marcador
EQUIPAMIENTO_PERSONALIZADO = 0;                     // Equipamiento guardado en arsenal virtual. 1: Permite, 0: No Permite.
COMPUTADORA_ARTILLERIA = 1;                         // Computadora artilleria. Habilita: 1. Desabilita: 0.
ROL_AUTOMATICO = 0;                                 // 1: Habilita la carga de rol al entrar a la misión por descripción de rol. 0: Desabilita
                                                    // Para verificar que los roles estan bien escritos activar todas las IAs y entrar
GPS = 0;                                            // Agrega GPS vanilla en rol automático o caja. 1: agrega, 0: remueve
VISION_NOCTURNA = 0;                                // Agrega visión nocturna panorámica en rol automático o caja. 1: agrega, 0: remueve
TIPO_VN = "ACE_NVG_Wide";                           // Tipo de la visión nocturna que se va a agregar en rol automático o caja.

INSIGNIA_AUTOMATICA = 0;                            // Añade insignias por pelotón o médicas. 1: Añade, 0: No Añade
INSIGNIA_IR = 0;                                    // Establece si las insignias son IR (1) o normales (0).

SETUP_PERSONALIZADO_RADIOS = 1;                     // Activa el setup de las radios de ACRE2. 1: activado, 0: desactivado


/* 
EQUIPAMIENTO
    Camuflajes disponibles:          Tipos disponibles:
       - Bosque                        - Multicam 
       - Desierto                      - Marpat
       - Selva                         - Liso
       - Negro

       - Personalizado (se debe ingresar mas abajo la clase del uniforme, chaleco, casco y mochila)
       - No editar (no se le modificara ninguna de las 4 cosas al jugador, solo arma y equipo interno)

         Las opciones Personalizada y No editar pueden llevar a comportamientos inesperados.
         Por lo que el editor queda a cargo de checkear y revisar el correcto funcionamiento.
*/
CAMUFLAJE = ["Bosque", "Multicam"];
GAFAS_INICIALES = "";
UNIFORME_PERSONALIZADO = "";
CASCO_PERSONALIZADO = "";
CHALECO_PERSONALIZADO = "";
MOCHILA_PERSONALIZADO = "";
MOCHILA_CHICA_PERSONALIZADO = "";
////////////////////////////////////////////////////////////////////////////////

/* 
BRIEFING
    Cada elemento del array es un parrafo
    Ejemplo: ["Primer parrafo", "Segundo parrafo"] 
*/
BRIEFING = 1;                                       // 1: Muestra, 0: No muestra
CARACTER = "Oficial";
HORARIO = "0800 hs.";
FECHA = "12/11/2020";
CLIMA = "Despejado";
UBICACION = "Virolahti";
SITUACION = ["Se ha derribado un transporte aéreo de personal y reemplazado el mismo por uno propio sin levantar sospechas. El mismo dejó al equipo ArgA en la base aérea improvisada en el aeropuerto duecio Visby, y despegó nuevamente.","Nos encontramos vestidos de técnicos y soldados Duecios, armados con la pistola reglamentaria. Los ingenieros y algunos granaderos han traído explosivos disimulados en sus pertenencias. Bajo esta ropa tenemos nuestro uniforme de ArgA para no ser juzgados como espías, en caso de ser capturados.","Debemos capturar el arsenal de la base, la torre de control y el radar, al capturarlos colocar explosivos sin levantar sospechas."];
SITUACION_HISTORICA = ["La semana pasada Duecia llevó a cabo una invasión a gran escala del territorio que reclama en Viro. Fue contenida con grandes pérdidas a pocos kilómetros de la frontera. Ha trasladado gran parte de sus blindados, helicópteros y aviones de combate a la zona. Su pretexto por la invasión es que, con apoyo de la Fuerza Internacional, insurgentes de Viro atacaban su territorio, por lo cual fue necesario crear una “zona de seguridad”, pese a que se habían capturado elementos duecios en el territorio de Viro, lo cual demuestra la gran mentira. Ha declarado un bloqueo aéreo y marítimo de Viro para impedir el ingreso de nuevas armas a la zona.","La Fuerza Internacional no estaba preparada para una guerra convencional, ya que su tarea original era más que nada policial. Sin un pronto refuerzo, los Duecios ganarán pronto.","No hay disponible portaaviones cerca para romper el bloqueo antes del ataque final Duecio.","Hay que destruir las unidades del enemigo antes que las distribuya sobre el terreno, aunque esto sea una misión sin retorno.","Ha llegado la hora de hacer el último sacrificio. Nos honra que todo ArgA se haya presentado como voluntarios."];
EXTRACTO_INTELIGENCIA = ["Gran concentración de blindados, helicópteros y aviones en la base aérea.","No hay gran concentración de tropas en la base aérea Visby.","Movilización masiva de tropas Duecias en el territorio capturado.","Patrullas insurgentes en toda la zona capturada, principalmente en caminos secundarios y poblaciones.","Elementos blindados a lo largo de las rutas y poblaciones capturadas."];
OBJETIVOS = ["Capturar el arsenal y colocar explosivos.","Capturar la torre de control y colocar explosivos.","Colocar explosivos en todo vehículo blindado y aéreo que se encuentre en la base.","Colocar explosivos en el radar al W de la base.","Detonar los explosivos.","Regresar al territorio aliado en Viro al otro lado de la tierra de nadie marcada en mapa.","Reglas de Combate:","No disparar antes de la detonación. Las elementos de Duecia deben ser arrestados sin despertar sospechas, ser cautelosos en las comunicaciones.","El personal de ArgA debe tener uniforme o ropa de técnico Duecio cuando esté realizando las tareas encubiertas.","Los elementos de ArgA deben rearmarse en el arsenal. No abandonar el mismo con el uniforme ArgA a la vista antes de las detonaciones."];
RECURSOS = ["Solo tenemos pistolas y radios. Los ingenieros tienen explosivos","Cajas de armado rápido en el arsenal enemigo"];
ENEMIGOS = ["Ejercito Duecio","Posibles insurgentes en zona ocupada"];
////////////////////////////////////////////////////////////////////////////////

/* Borrado de IAs enemigas muertas y vehículos destruidos */
RECOLECTOR_BASURA = 1;                              // Activa la funcion que borra las IAs muertas y vehículos destruidos. 1: Activado, 0: Desactivado
RB_TIEMPO_ESPERA_HOMBRES = 120;                     // Tiempo en segundos de espera para eliminar soldados enemigos. 0 Desactiva el borrado de enemigos
RB_TIEMPO_ESPERA_VEHICULOS = 0;                     // Tiempo en segundos de espera para eliminar vehículos enemigos. 0 Desactiva el borrado de vehículos
RB_TIEMPO_ESPERA_BLINDADOS = 0;                     // Tiempo en segundos de espera para eliminar blindados enemigos. 0 Desactiva el borrado de blindados
RB_TIEMPO_ESPERA_AEREOS = 0;                        // Tiempo en segundos de espera para eliminar aereos enemigos. 0 Desactiva el borrado de aereos
RB_DISTANCIA_JUGADORES = 0;                         // Distancia en metros a los jugadores a partir de la cual se borra. 0 desactiva el borrado por distancia
////////////////////////////////////////////////////////////////////////////////

/* Camuflaje */
COEFICIENTES_CAMUFLAJE = 0;                         // 1: Activada. 0: Desactivada.
COEFICIENTE_AUDICION = 1;                           // Valores menores hacen al jugador mas difícil de escuchar. Valores decimales ente 0 y 1.
COEFICIENTE_CAMUFLAJE = 1;                          // Valores menores hacen al jugador mas difícil de detectar. Valores decimales ente 0 y 1.
////////////////////////////////////////////////////////////////////////////////

/* IA - CONFIGURACION */
IA_DE_GRUPO = 0;                                    // 1: No desactiva la IA del Grupo de los jugadores, 0: la desactiva.
IA_BLUFOR = 1;                                      // 1: No desactiva la IA Blufor, 0: la desactiva.
DIFICULTAD_IA_PERSONALIZADA = 0;                    // 1: Activada. 0: Desactivada.
AIMING_ACCURACY = 0.01;                             // Precision de apuntado
AIMING_SHAKE = 0.99; 	                            // Dispersión de apuntado
AIMING_SPEED = 0.1; 	                            // Velocidad de apuntado
SPOT_DISTANCE = 0.3; 	                            // Distancia de avistamiento
SPOT_TIME = 0.5; 		                            // Tiempo de avistamiento
COURAGE = 0.25; 		                            // Coraje
RELOAD_SPEED = 0.25; 	                            // Velocidad de recarga
COMMANDING = 0.75; 		                            // Liderazgo
////////////////////////////////////////////////////////////////////////////////

/* Modificar desde los define que estan arriba de todo.
NO TOCAR LO QUE ESTA ABAJO DE ESTA LINEA             */
onLoadName = NAME;	                                // Nombre de carga
briefingName = COMPLETE_NAME;                       // Nombre en briefing
onLoadMission = DESCRIPTION;                        // Pie de carga
overviewText = DESCRIPTION;                         // Pie en seleccion de mision
overviewPicture = IMAGE;                            // Imagen en seleccion de mision
loadScreen = IMAGE;                                 // Imagen en carga
////////////////////////////////////////////////////////////////////////////////

/*******************************************************************************
                         Realizado por |ArgA|MIV
*******************************************************************************/