// this file is generated by xresloader, please don't edit it.

(function(){
  var extend = function (dst, src) {
    for (var k in src) {
      var v = src[k];
      if (undefined === dst[k] || 'object' != typeof(v)) {
        dst[k] = v;
      } else {
        if ('object' != typeof(dst[k])) {
          dst[k] = {};
        }
        extend(dst[k], v)
      }
    }
  };

  var local_data_set = null;
  local_data_set = {
    xresloader : {
      role_cfg : [
        {
          cost_value : 1,
          dep_test : {
            dep2 : {
              id : 101,
              level : "2014-10-13"
            },
            id : 51,
            name : "123"
          },
          id : 10001,
          int_as_string : "0",
          name : "欧若拉",
          test_array : [
            "lalal",
            "欧若拉",
            "小魔女"
          ],
          test_plain_enum_array : [
            10001
          ]
        },
        {
          cost_value : 2,
          dep_test : {
            dep2 : {
              id : 201,
              level : "2014-10-14"
            },
            id : 61,
            name : "654"
          },
          id : 10002,
          int_as_string : "1",
          name : "杰克",
          test_array : [
            "blebleble",
            "杰克",
            "海盗王子"
          ],
          test_plain_enum_array : [
            10001,
            10101
          ],
          unlock_level : 39
        },
        {
          cost_value : 4,
          dep_test : {
            dep2 : {
              id : 301,
              level : "2014-10-15"
            },
            id : 71,
            name : "sdadasd"
          },
          id : 10003,
          int_as_string : "2",
          name : "库拉",
          test_array : [
            "hahaha",
            "库拉",
            "喵少年"
          ],
          test_plain_enum_array : [
            10001,
            10001,
            10101
          ],
          unlock_level : 85
        },
        {
          cost_value : 8,
          dep_test : {
            dep2 : {
              id : 401,
              level : "19:10:50"
            },
            id : 81,
            name : "ffff"
          },
          id : 10004,
          int_as_string : "3",
          name : "莫瑞茨",
          test_array : [
            "angel",
            "莫瑞茨"
          ],
          unlock_level : 122
        },
        {
          dep_test : {
            id : 12
          },
          int_as_string : "4"
        },
        {
          cost_type : 10001,
          cost_value : 99999,
          dep_test : {
            dep2 : {
              id : 501,
              level : "09:10:50"
            },
            id : 91,
            name : "gggg"
          },
          id : 10005,
          int_as_string : "5",
          name : "爱丽丝",
          test_array : [
            "laopo",
            "爱丽丝"
          ],
          unlock_level : 183
        },
        {
          cost_type : 10101,
          cost_value : 999,
          dep_test : {
            dep2 : {
              id : 601,
              level : "2014-50-20 07:50:50"
            },
            id : 101,
            name : "hhhhh"
          },
          id : 10006,
          int_as_string : "6",
          name : "都玛西亚",
          test_array : [
            "keai",
            "都玛西亚"
          ],
          unlock_level : 274
        }
      ],
      role_cfg_data_message_type : "role_cfg",
      role_cfg_header : {
        count : 7,
        data_source : [
          {
            file : "./资源转换示例.xlsx",
            sheet : "kind"
          }
        ],
        data_ver : "1.0.0.0",
        hash_code : "sha256:0c333be4391e1f1303efcf68a348d6c74e6b7a9c66a736f3b04536cc90289fca",
        xres_ver : "2.11.0-rc2"
      }
    }
  };
  try { extend(window, { "sample" : local_data_set }); }
  catch(e) { extend(global, { "sample" : local_data_set }); }

})();
