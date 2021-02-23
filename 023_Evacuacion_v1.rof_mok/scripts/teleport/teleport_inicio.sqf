/*******************************************************************************
                          Realizado por |ArgA|Vultur|Sgt
*******************************************************************************/

// [
//     [
//         [Activador de origen, Marcador de destino],
//         [Activador de origen 2, Marcador de destino 2],
//         ...
//     ],
//     objeto al que se agrega el addAction
// ];

private _teleport_data = [
    [
        [teleport_a_delta_alfa,"delta_alfa"],
        [teleport_a_charlie_alfa,"charlie_alfa"]
    ],
    VUL_MASTIL
];

_teleport_data execVM "scripts\teleport\teleport.sqf";

/*******************************************************************************
                          Realizado por |ArgA|Vultur|Sgt
*******************************************************************************/