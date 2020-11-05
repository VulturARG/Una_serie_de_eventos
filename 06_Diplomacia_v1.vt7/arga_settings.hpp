/*******************************************************************************
                          Realizado por |ArgA|MIV
*******************************************************************************/

#define NAME "Diplomacia"                           // Colocar nombre de mision
#define COMPLETE_NAME "Diplomacia v1"               // Nombre y versión de la misión
#define IMAGE "imgs\portada_DIP.jpg"                // Colocar nombre y extension de la imagen de portada, ej "imgs\portada.jpg"
#define DESCRIPTION "Negociando la Paz"             // Colocar descripcion de la mision entre las comillas

author = "Shaggy - Vultur";                         // Editor (Pone tu nombre)
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
ROL_AUTOMATICO = 1;                                 // 1: Habilita la carga de rol al entrar a la misión por descripción de rol. 0: Desabilita
                                                    // Para verificar que los roles estan bien escritos activar todas las IAs y entrar
GPS = 0;                                            // Agrega GPS vanilla en rol automático o caja. 1: agrega, 0: remueve
VISION_NOCTURNA = 0;                                // Agrega visión nocturna panorámica en rol automático o caja. 1: agrega, 0: remueve
TIPO_VN = "ACE_NVG_Wide";                           // Tipo de la visión nocturna que se va a agregar en rol automático o caja.

INSIGNIA_AUTOMATICA = 1;                            // Añade insignias por pelotón o médicas. 1: Añade, 0: No Añade
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
HORARIO = "1100 hs.";
FECHA = "05/11/2020";
CLIMA = "Despejado";
UBICACION = "Virolahti";
SITUACION = ["Los diplomáticos de Viro llegaron al sector fronterizo a las 0900, tras 2 horas no se han presentado los diplomáticos Duecios. Temiendo lo peor se solicitó a las fuerzas internacionales próximas (ArgA) brindar soporte a lo largo de los cruces Alfa y Charlie.", "Debemos garantizar la seguridad personal a los diplomáticos de Viro en Cruce Bravo. Ante alguna necesidad se dispuso un puesto seguro de parte de fuerzas locales en Portsson, desde donde fuerzas navales podrían extraerlos.","ArgA se encuentra en un convoy en marca de la R.N. 13 a pocos metros del Cruce Bravo."];
SITUACION_HISTORICA = ["La República de Viro es un territorio que posee abundantes recursos naturales y contiene una serie de islas ubicadas estratégicamente. Duesia, una potencia regional, pretende recuperar su antigua provincia bajo administración actual de Viro. Se cree que apoyó movimientos guerrilleros a en el pasado.", "Una coalición internacional mantiene presencia en todo el país para evitar una escalada de conflicto. ArgA es parte de la misma y desde su llegada realizó tareas para desmantelar las células guerrilleras.", "En las últimas operaciones se apresó población Duesia entre las filas guerrilleras. El gobierno de Viro denunció que son activos enviados por los Duecios. En contraparte el gobierno Duecio denuncia una maniobra para desacreditar su reclamación histórica. La tensión incrementa mientras se bloquean pasos fronterizos y se militarizan sus proximidades. Con perspectiva de no estallar un conflicto armado, Viro solicitó una reunión diplomática en un edificio de oficinas en el Cruce Bravo, del lado Duecio."];
EXTRACTO_INTELIGENCIA = ["Movilización masiva de tropas Duecias en puestos avanzados a lo largo de la frontera con Viro. Reportes de 1 Brigada de Infantería mecanizada y elementos de fuerzas especiales en la base aérea Duesia próxima a Virojohki.", "Cruces menores de frontera cerrados por los Duecios [X]."];
OBJETIVOS = ["Reforzar las tropas de seguridad de los diplomáticos en torno al edificio de reunión en Cruce Bravo.", "Reforzar las tropas en los Cruces Alfa y Charlie.","Reglas de Combate:","No disparar sin provocación previa.","Sólo traspasar la frontera en el punto Bravo sin salir de los complejos de cruce internacional.", "Apresar a cualquier civil que transgreda la zona de seguridad fronteriza y entregarlo a las fuerzas locales."];
RECURSOS = ["Aparecemos armados y listos para el combate.", "Disponemos de radios y equipo adicional en los vehículos.", "1 Pandur II.", "1 M113.", "5 Humvees artillados M2.", "2 Humvees artillados Mk19.", "2 Humvees ambulancia.", "2 Humvees desarmados.", "1 Mercedes para comandancia."];
ENEMIGOS = ["Desconocido"];
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