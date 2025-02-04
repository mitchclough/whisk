
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 27 "schema.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>

#if 0
#define DEBUG_LEXER
#define DEBUG_GRAMMAR
#endif

#define ASRT(e) do {size_t v = (size_t)(e); assert(v); } while(0)

#ifdef DEBUG_LEXER
  #define debug_lexer(...) printf(__VA_ARGS__)
#else
  #define debug_lexer(...)
#endif

#ifdef DEBUG_GRAMMAR
  #define debug_grammar(...) printf(__VA_ARGS__)
#else
  #define debug_grammar(...)
#endif

#ifdef _MSC_VER
#define snprintf _snprintf
#endif

#define CPRN(...) fprintf(cfile,__VA_ARGS__)
#define HPRN(...) fprintf(hfile,__VA_ARGS__)

FILE *cfile = NULL;
FILE *hfile = NULL;
char *g_headername = NULL;
int  yylex  (void);
void yyerror(char const *);

char *default_params[] = {
  "[error]\\n",
  "SHOW_DEBUG_MESSAGES     1\\n",
  "SHOW_PROGRESS_MESSAGES  1\\n",
  "\\n",
  "[reclassify]\\n",
  "HMM_RECLASSIFY_SHP_DISTS_NBINS 16\\n",
  "HMM_RECLASSIFY_VEL_DISTS_NBINS 8096\\n",
  "HMM_RECLASSIFY_BASELINE_LOG2   -500.0\\n",
  "COMPARE_IDENTITIES_DISTS_NBINS 8096\\n",
  "IDENTITY_SOLVER_VELOCITY_NBINS 8096\\n",
  "IDENTITY_SOLVER_SHAPE_NBINS    16\\n",
  "\\n",
  "[trace]\\n",
  "SEED_METHOD                    SEED_ON_GRID // Specify seeding method: may be SEED_ON_MHAT_CONTOURS, SEED_ON_GRID, or SEED_EVERYWHERE\\n",
  "SEED_ON_GRID_LATTICE_SPACING   50           // (pixels)\\n",
  "SEED_SIZE_PX                   4            // Width of the seed detector in pixels.\\n",
  "SEED_ITERATIONS                1            // Maxium number of iterations to re-estimate a seed.\\n",
  "SEED_ITERATION_THRESH          0.0          // (0 to 1) Threshold score determining when a seed should be reestimated.\\n",
  "SEED_ACCUM_THRESH              0.0          // (0 to 1) Threshold score determining when to accumulate statistics\\n",
  "SEED_THRESH                    0.99         // (0 to 1) Threshold score determining when to generate a seed\\n",
  "\\n",
  "HAT_RADIUS                     1.5          // Mexican-hat radius for whisker detection (seeding)\\n",
  "MIN_LEVEL                      1            // Level-set threshold for mexican hat result.  Used for seeding on mexican hat contours.\\n",
  "MIN_SIZE                       20           // Minimum # of pixels in an object considered for mexican-hat based seeding.\\n",
  "\\n",
  "                                            // detector banks parameterization.  If any of these change, the detector banks\\n",
  "                                            // should be deleted.  They will be regenerated on the next run.\\n",
  "                                            //\\n",
  "TLEN                           8            // (px) half the size of the detector support.  If this is changed, the detector banks must be deleted.\\n",
  "OFFSET_STEP                    .1           // pixels\\n",
  "ANGLE_STEP                     18.          // divisions of pi/4\\n",
  "WIDTH_STEP                     .2           // (pixels)\\n",
  "WIDTH_MIN                      0.4          // (pixels) must be a multiple of WIDTH_STEP\\n",
  "WIDTH_MAX                      6.5          // (pixels) must be a multiple of WIDTH_STEP\\n",
  "MIN_SIGNAL                     5.0          // minimum detector response per detector column.  Typically: (2*TLEN+1)*MIN_SIGNAL is the threshold determining when tracing stops.\\n",
  "MAX_DELTA_ANGLE                10.1         // (degrees)  The detector is constrained to turns less than this value at each step.\\n",
  "MAX_DELTA_WIDTH                6.0          // (pixels)   The detector width is constrained to change less than this value at each step.\\n",
  "MAX_DELTA_OFFSET               6.0          // (pixels)   The detector offset is constrained to change less than this value at each step.\\n",
  "HALF_SPACE_ASSYMETRY_THRESH    0.25         // (between 0 and 1)  1 is completely insensitive to asymmetry\\n",
  "HALF_SPACE_TUNNELING_MAX_MOVES 50           // (pixels)  This should be the largest size of an occluding area to cross\\n",
  "\\n",                                                                                                                                                                                                                
  "FRAME_DELTA                    1            // [depricated?] used in compute_zone to look for moving objects\\n",
  "DUPLICATE_THRESHOLD            5.0          // [depricated?]\\n",
  "MIN_LENGTH                     20           // [depricated?]           If span of object is not 20 pixels will not use as a seed\\n",
  "MIN_LENSQR                     100          // [depricated?]           (MIN_LENGTH/2)^2\\n",
  "MIN_LENPRJ                     14           // [depricated?] [unused]  floor(MIN_LENGTH/sqrt(2))\\n",
  NULL,
};

//
// Type
//

struct enumlist
{ char *name;
  struct enumlist *last;
};

typedef enum _typeids
{ BOOL=1,
  INT,
  FLOAT,
  ENUM
} etypeid;

typedef struct _type
{ etypeid id;
  struct enumlist *e;
} Type;

struct t_specials
{ etypeid id;
  char *name;
};

struct t_specials specials[] = { {BOOL, "BOOL"},
                                 {INT, "INT"},
                                 {FLOAT, "FLOAT"},
                                 {0, NULL }};
Type *newtype(void)
{ Type *self;
  ASRT(self=malloc(sizeof(Type)));
  memset(self,0,sizeof(Type));
  return self;
}

struct enumlist *newenumnode(void)
{ struct enumlist *self;
  ASRT(self=malloc(sizeof(struct enumlist)));
  memset(self,0,sizeof(struct enumlist));
  return self;
}

Type *gentype(Type *left, char *right)
{ struct t_specials *cur;
  Type *self = newtype();
  for(cur=specials; cur->name; cur++ )
  { if( strcmp(right,cur->name)==0 )
    { self->id = cur->id;
      break;
    }
  }
  if( cur->name==NULL )                // didn't find anything, must be an enum
  {
    self->id = ENUM;
    self->e = newenumnode();
    self->e->name = right;
    if(left)                           // need to append to left (it's an enum list)
    { ASRT(left->id == ENUM );
      self->e->last = left->e;
      free(left);
    } else {                           // this is a new enum list, so make the root node
      self->e->last = NULL;
    }
  }
  return self;
}

//
// KEYVALUE
//
typedef struct keyvalue
{ char *key;
  Type *value;
  struct keyvalue *last;
} tkv;

tkv *g_kv = NULL;

tkv *new_keyvalue(void)
{ tkv *self;
  ASRT(self = malloc(sizeof(tkv)));
  memset(self,0,sizeof(tkv));
  return self;
}

void kvprint_enum_defn(tkv *self)
{ if(self->value && self->value->id==ENUM)
  {
        HPRN("typedef enum _t_enum_%s {",self->key);
        { struct enumlist *cur;
          ASRT(self->value->e);
          for(cur=self->value->e;cur->last;cur=cur->last)
            HPRN("%s, ",cur->name);
          HPRN("%s} enum%s;\n",cur->name, self->key);
        }
  }
}
void kvprint_enum_defns(tkv* self)
{ 
  kvprint_enum_defn(self);
  while(self->last->key)
  { self = self->last;
    kvprint_enum_defn(self);
  }
}

void kvprint_enum_token(tkv *self)
{ if(self->value && self->value->id==ENUM)
  { struct enumlist *cur;
    ASRT(self->value->e);
    for(cur=self->value->e;cur->last;cur=cur->last)
      CPRN("%%token <val%s> TOK_%s \"%s\"\n",self->key,cur->name,cur->name);
    CPRN("%%token <val%s> TOK_%s \"%s\"\n",self->key,cur->name,cur->name);
  }
}
void kvprint_enum_tokens(tkv* self)
{ 
  kvprint_enum_token(self);
  while(self->last->key)
  { self = self->last;
    kvprint_enum_token(self);
  }
}

void kvprint_API_defn_getters(tkv *self)
{ tkv* cur;
  for(cur=self;cur->last;cur=cur->last)
    HPRN("#define %s (Params()->param%s)\n",cur->key,cur->key);
}

void kvprint_params_struct_item(tkv *self)
{ 
  if(self->value)
  { switch( self->value->id )
    { case BOOL:
        HPRN("\tchar\t");
        break;
      case INT:
        HPRN("\tint\t");
        break;
      case FLOAT:
        HPRN("\tfloat\t");
        break;
      case ENUM:
        HPRN("\tenum%s\t",self->key);
        break;
      default:
        ASRT(0);
    }
  }
  if(self->key)
    HPRN("param%s;\n",self->key);
  else
    HPRN("\n");
}

void kvprint_params_struct(tkv* self)
{ HPRN("typedef struct _t_params {\n"); 
  kvprint_params_struct_item(self);
  while(self->last->key)
  { self = self->last;
    kvprint_params_struct_item(self);
  }
  HPRN("} t_params;\n");
  CPRN("t_params g_param;\n");
}

void kvprint_param_string_table(tkv* self)
{ tkv* cur;
  CPRN("char *g_param_string_table[] = {\n");
  for(cur=self;cur->last->last;cur=cur->last)
  { CPRN("\t\"%s\",\n",cur->key);
  }
  CPRN("\t\"%s\"};\n",cur->key); 
}

void kvprint_param_tracking_enum(tkv* self)
{ tkv *cur;
  CPRN("enum eParamTrackingIndexes {\n");
  for(cur=self;cur->last;cur=cur->last)
  { CPRN("\tindex%s,\n",cur->key);
  }
  CPRN("\tindexMAX\n};\n"
         "int g_found_parameters[indexMAX];\n");

}

void kvprint_token(tkv *self)
{ CPRN("%%token %s\t\"%s\"\n",self->key,self->key);
}

void kvprint_tokens(tkv *self)
{ tkv *root = self;
  // union - print the value types
  CPRN("%%union{ int integral;\n"
         "        float decimal;\n");
  for(;self->last->key;self=self->last)
  { if(self->value->id==ENUM)
      CPRN("        enum%s val%s;\n",self->key,self->key);
  }
  CPRN("       }\n");
#if 0
  CPRN("//Parameter name tokens\n");
  self=root;
  kvprint_token(self);
  while(self->last->key)
  { self = self->last;
    kvprint_token(self);
  }
#endif
  CPRN("//Normal tokens\n"
         "%%token            COMMENT\n"
         "%%token <integral> INTEGRAL\n"
         "%%token <decimal>  DECIMAL\n"
         "%%type  <decimal>  decimal\n"
         );
  CPRN("//Enum value tokens\n");
  kvprint_enum_tokens(root);
}                                                  

void kvprint_line_grammer_item_type(tkv *self)
{ 
  if(self->value)
  { 
    switch( self->value->id )
    { case BOOL:
        CPRN("integral");
        break;
      case INT:
        CPRN("integral");
        break;
      case FLOAT:
        CPRN("decimal");
        break;
      case ENUM:
        CPRN("val%s",self->key);
        break;
      default:
        ASRT(0);
    }
  }
}

void kvprint_line_grammer_item(tkv* self)
{ 
  CPRN("      | \"%s\" ",self->key);
  switch( self->value->id )
  { case BOOL:
      CPRN("INTEGRAL");
      break;
    case INT:
      CPRN("INTEGRAL");
      break;
    case FLOAT:
      CPRN("decimal");
      break;
    case ENUM:
      CPRN("value");
      break;
    default:
      ASRT(0);
  }
  CPRN(" comment '\\n'  {g_param.param%s=$<",self->key);
  kvprint_line_grammer_item_type(self);
  CPRN(">2;g_found_parameters[index%s]=1; debug_grammar(\"\\t%s\\n\");}\n",self->key,self->key);
  CPRN("      | \"%s\" error comment '\\n'  {\n"
         "                                      fprintf(stderr,\n"
         "                                             \""
         "Problem encountered loading parameters file at line %%d, columns %%d-%%d\\n\"\n"
         "                                             \"\\tCould not interpret value for %s.\\n\"\n"
         "                                             \"\\tExpected a value of ",self->key,self->key);
  if(self->value->id==ENUM)
  { struct enumlist *cur;
    CPRN(":\\n");
    for(cur=self->value->e;cur->last;cur=cur->last)
    { 
      CPRN("\\t\\t%s\\n",cur->name);
    }
    CPRN("\\t\\t%s\\n\",\n",cur->name);
  } else
  { kvprint_line_grammer_item_type(self);
    CPRN(" type.\\n\",\n");
  }
    CPRN(
         "                                               @2.first_line,@2.first_column+1,\n" 
         "                                               @2.last_column+1);\n"
         "\n"
         "                                       PARSER_INCERR\n"
         "                                       yyerrok;\n" 
         "                                     }\n");
}

void kvprint_line_grammar(tkv* self)
{ CPRN("line:   '\\n'                        { debug_grammar(\"\\tEMPTY LINE\\n\"); }\n");
  kvprint_line_grammer_item(self);
  while(self->last->key)
  { self = self->last;
    kvprint_line_grammer_item(self);
  }
  CPRN(//"      | '[' STRING ']' '\\n'         { debug_grammar(\"\\tSECTION\\n\"); }\n" // These get processed by the (produced) lexer as comments
         "      | comment '\\n'                { debug_grammar(\"\\tCOMMENT LINE\\n\"); }\n"
         "      | error '\\n'                  { fprintf(stderr,\"Problem "
         "encountered loading parameters file at line %%d, columns %%d-%%d\\n\"\n"
         "                                                       "
         "\"\\tCould not interpret parameter name.\\n\",\n"
         "                                               @1.first_line,@1.first_column+1,\n" 
         "                                               @1.last_column+1);\n"
         "                                       PARSER_INCERR\n"
         "                                       yyerrok;\n" 
         "                                     }\n"
         "      ;\n");
}

void kvprint_enum_grammar_value(tkv *self)
{ if(self->value && self->value->id==ENUM)
  { struct enumlist *cur;
    ASRT(self->value->e);
    for(cur=self->value->e;cur->last;cur=cur->last)
      CPRN("       | TOK_%s          {$<val%s>$=%s;}\n",cur->name,self->key,cur->name); 
    CPRN("       | TOK_%s          {$<val%s>$=%s;}\n",cur->name,self->key,cur->name); 
  }
}
void kvprint_enum_grammar_values(tkv* self)
{ 
  kvprint_enum_grammar_value(self);
  while(self->last->key)
  { self = self->last;
    kvprint_enum_grammar_value(self);
  }
}
void kvprint_value_grammar(tkv *self)
{ 
  
  CPRN("decimal: INTEGRAL         {$$=$1;}\n"
         "       | DECIMAL          {$$=$1;}\n");
  CPRN("value:   INTEGRAL         {$<integral>$=$1;}\n"
         "       | DECIMAL          {$<decimal>$=$1;}\n");
  kvprint_enum_grammar_values(self);
  CPRN("       ;\n");
}      

void print_prelude(char *headername)
{ CPRN(
     "/*\n"
     " * Author: Nathan Clack <clackn@janelia.hhmi.org>\n"
     " * Date  : June 2010\n"
     " * \n"
     " * Copyright 2010 Howard Hughes Medical Institute.\n"
     " * All rights reserved.\n"
     " * Use is subject to Janelia Farm Research Campus Software Copyright 1.1\n"
     " * license terms (http://license.janelia.org/license/jfrc_copyright_1_1.html).\n"
     " */\n"
     "#include <stdio.h>\n"
     "#include <string.h>\n"
     "#include <stdlib.h>\n"
     "#include <ctype.h>\n"
     "#include <assert.h>\n"
     "#include \"%s\"\n"
     "\n"
     "#define ASRT(e) do {size_t v = (size_t)(e); assert(v); } while(0)\n"
     "\n"
     "#define YYPRINT\n"
     "#if 0\n"
     "#define DEBUG_LEXER\n"
     "#define DEBUG_GRAMMAR\n"
     "#endif\n"
     "\n"
     "#ifdef DEBUG_LEXER\n"
     "  #define debug_lexer(...) printf(__VA_ARGS__)\n"
     "#else\n"
     "  #define debug_lexer(...)\n"
     "#endif\n"
     "\n"
     "#ifdef DEBUG_GRAMMAR\n"
     "  #define debug_grammar(...) printf(__VA_ARGS__)\n"
     "#else\n"
     "  #define debug_grammar(...)\n"
     "#endif\n"
     "\n"
     "int  yylex  (void);\n"
     "void yyerror(char const *);\n"
     "\n"
     "int g_nparse_errors = 0;\n"
     "#define MAX_PARSE_ERRORS (10)\n"

     "#define PARSER_INCERR \\\n"
     "if(++g_nparse_errors>MAX_PARSE_ERRORS)\\\n"
     "{ fprintf(stderr,\"Too many problems parsing parameter file. Aborting.\\n\");\\\n"
     "  YYABORT;\\\n"
     "}\n",headername
     );
}

void print_epilogue() 
{
  CPRN(
     "FILE *fp=NULL;                                               // when a file is opened, this points to the file\n"
     "int yylex(void)\n"
     "{ int c;\n"
     "  static char *str = NULL;\n"
     "  static size_t str_max_size = 0;\n"
     "  ASRT(fp);\n"
     "\n"
     "\n"
     "  if(!str)\n"
     "  { str = malloc(1024);\n"
     "    ASRT(str);\n"
     "    str_max_size = 1024;\n"
     "  }\n"
     "\n"
     "  while( (c=getc(fp))==' '||c=='\\t' ) ++yylloc.last_column;  // skip whitespace\n"
     "  if(c==0)\n"
     "  { if(feof(fp))\n"
     "      return 0;\n"
     "    if(ferror(fp))\n"
     "    { fprintf(stderr,\"\\t lex - Got error: %%d\\n\",ferror(fp));\n"
     "    }\n"
     "  }\n"
     "\n"

     "  /* Step */\n"
     "  yylloc.first_line = yylloc.last_line;\n"
     "  yylloc.first_column = yylloc.last_column;\n"
     "  debug_lexer(\"\\t\\t\\t\\t lex - Start: %%d.%%d\\n\",yylloc.first_line,yylloc.first_column);\n"
     "  \n"

     "  if(isalpha(c))                                 // process string tokens\n"
     "  { int i,n=0;\n"
     "    while(!isspace(c))\n"
     "    { \n"
     "      ++yylloc.last_column;\n"
     "      if( n >= str_max_size )                    // resize if necessary\n"
     "      { str_max_size = 1.2*n+50;\n"
     "        str = realloc(str,str_max_size);\n"
     "        ASRT(str);\n"
     "      }\n"
     "      str[n++] = c;\n"
     "      c = getc(fp);\n"
     "    }\n"
     "    ungetc(c,fp);\n"
     "    str[n]='\\0';\n"
     "                                                // search token table\n"
     "    for (i = 0; i < YYNTOKENS; i++)\n"
     "    {\n"
     "      if (yytname[i] != 0\n"
     "          && yytname[i][0] == '\"'\n"
     "          && ! strncmp(yytname[i] + 1, str,strlen(str))\n"
     "          && yytname[i][strlen(str) + 1] == '\"'\n"
     "          && yytname[i][strlen(str) + 2] == 0)\n"
     "        break;\n"
     "    }\n"
     "    if(i<YYNTOKENS)\n"
     "    {\n"
     "      debug_lexer(\"\\tlex - (%%d) %%s\\n\",i,str);\n"
     "      return yytoknum[i];\n"
     "    }\n"
     "    else //nothing was found - put characters back on the stream\n"
     "    { yylloc.last_column-=n;\n"
     "      while(n--)\n"
     "      { ungetc(str[n],fp);\n"
     "      }\n"
     "      c = getc(fp);\n"
     "      ++yylloc.last_column;\n"
     "    }\n"
     "  }\n"
     "\n"

     "  if(c=='.'||isdigit(c)||c=='-')     // process numbers\n"
     "  { int n = 0;\n"
     "    do\n"
     "    { if( n >= str_max_size )        //resize if necessary\n"
     "      { str_max_size = 1.2*n+50;\n"
     "        str = realloc(str,str_max_size);\n"
     "        ASRT(str);\n"
     "      }\n"
     "      str[n++] = c;\n"
     "      c = getc(fp);\n"
     "      ++yylloc.last_column;\n"
     "    }while(c=='.'||isdigit(c));\n"
     "    ungetc(c,fp);\n"
     "    --yylloc.last_column;\n"
     "    str[n]='\\0';\n"
     "    if(strchr(str,'.'))\n"
     "    { yylval.decimal = atof(str);\n"
     "      debug_lexer(\"\\tlex - DECIMAL (%%f)\\n\",yylval.decimal);\n"
     "      return DECIMAL;\n"
     "    } else\n"
     "    { yylval.integral = atoi(str);\n"
     "      debug_lexer(\"\\tlex - INTEGRAL (%%d)\\n\",yylval.integral);\n"
     "      return INTEGRAL;\n"
     "    }\n"
     "  }\n"
     "\n"
     "  if(c=='[')                                                 // process section headers as comments\n"
     "  { while( getc(fp)!='\\n' ) ++yylloc.last_column;           // read the rest of the line\n"
     "    ungetc('\\n',fp);\n"
     "    debug_lexer(\"\\tlex - COMMENT\\n\");\n"
     "    return COMMENT;\n"
     "  }\n"
     "  if(c=='/')                                                 // process c-style end-of-line comments\n"
     "  { int d;\n"
     "    d=getc(fp);\n"
     "    ++yylloc.last_column;\n"
     "    if(d=='/' || d=='*')\n"
     "    { while( getc(fp)!='\\n' ) ++yylloc.last_column;        // read the rest of the line\n"
     "      ungetc('\\n',fp);\n"
     "    }\n"
     "    debug_lexer(\"\\tlex - COMMENT\\n\");\n"
     "    return COMMENT;\n"
     "  }\n"
     "\n"
     "  if(c==EOF)\n"
     "  { debug_lexer(\"\\tlex - EOF\\n\");\n"
     "    fclose(fp);\n"
     "    fp=0;\n"
     "  }\n"
     "  if(c=='\\n')\n"
     "  {\n" 
     "    ++yylloc.last_line;\n" 
     "    yylloc.last_column=0;\n"
     "  }\n" 
     "  return c;\n"
     "}\n"
     "\n"
     "void yyerror(char const *s)\n"
     "{ //fprintf(stderr,\"Parse Error:\\n---\\n\\t%%s\\n---\\n\",s);\n"
     "}\n"
     "\n"
     "SHARED_EXPORT\n"
     "t_params *Params(void) {return &g_param;}\n"
     "\n"
     "SHARED_EXPORT\n"
     "int Load_Params_File(char *filename)\n"
     "{ int sts; //0==success, 1==failure\n"
     "  // FILE *fp is global\n"
     "  g_nparse_errors=0;\n"
     "  memset(g_found_parameters,0,sizeof(g_found_parameters));\n"
     "  fp = fopen(filename,\"r\");\n"
     "  if(!fp)\n"
     "  { fprintf(stderr,\"Could not open parameter file at %%s.\\n\",filename);\n"
     "    return 1;\n"
     "  }\n"
     "  sts = yyparse();\n"
     "  if(fp) fclose(fp);\n"
     "  sts |= (g_nparse_errors>0);\n"
     "  {\n"
     "    int i;\n"
     "    for(i=0;i<indexMAX;++i)\n"
     "      if(g_found_parameters[i]==0)\n"
     "      { sts=1;\n"
     "        fprintf(stderr,\"Failed to load parameter: %%s\\n\",g_param_string_table[i]);\n"
     "      }\n"
     "  }\n"
     "  return sts;\n"
     "}\n"
     "\n"
     "SHARED_EXPORT\n"
     "int Print_Params_File(char *filename)\n"
     "{ int sts=0; //0==success, 1==failure\n"
     "  FILE *fp;\n"
     "  fp = fopen(filename,\"w\");\n"
     "  if(!fp)\n"
     "  { fprintf(stderr,\"Could not open parameter file for writing: %%s\\n\",filename);\n"
     "    return 1;\n"
     "  }\n"
     "  {\n");
    { int iline=0;
      char *line;
      char buf[2048];
      while(line=default_params[iline++])
      { memset(buf,0,sizeof(buf));
        snprintf(buf,2048,"    fprintf(fp,\"%s\");\n",line);
        CPRN("%s",buf);
      }
    }
  CPRN(
     "  }\n"
     "  fclose(fp);\n"
     "  return sts;\n"
     "}\n"
     "\n"
     );
}

void kvprintall(tkv *self)
{ CPRN("%%{\n");
  print_prelude(g_headername);
  HPRN(
       "/*\n"
       " * Author: Nathan Clack <clackn@janelia.hhmi.org>\n"
       " * Date  : June 2010\n"
       " *\n"
       " * Copyright 2010 Howard Hughes Medical Institute.\n"
       " * All rights reserved.\n"
       " * Use is subject to Janelia Farm Research Campus Software Copyright 1.1\n"
       " * license terms (http://license.janelia.org/license/jfrc_copyright_1_1.html).\n"
       " */\n"
       "#pragma once\n"
       "#ifndef SHARED_EXPORT\n"
       "#ifdef _MSC_VER\n"
       "#define SHARED_EXPORT __declspec(dllexport)\n"
       "#else\n"
       "#define SHARED_EXPORT\n"
       "#endif\n"
       "#endif\n");
  kvprint_enum_defns(self);
  kvprint_API_defn_getters(self);
  kvprint_params_struct(self);
  kvprint_param_tracking_enum(self);
  kvprint_param_string_table(self);
  CPRN("%%}\n");
  CPRN("%%token-table\n");
  kvprint_tokens(self);
  CPRN("%%%%\n");
  CPRN("input:   /*empty*/                   { debug_grammar(\"EMPTY INPUT\\n\"); }\n"  
         "       | input line                  { debug_grammar(\"LINE\\n\"); }\n"
         "       ;\n");
  CPRN("comment: /*empty*/                   { debug_grammar(\"\\t\\tCOMMENT EMPTY\\n\"); }\n"  
         "       | COMMENT                     { debug_grammar(\"\\t\\tCOMMENT TAIL\\n\"); }\n"
         "       ;\n");
  kvprint_line_grammar(self);
  kvprint_value_grammar(self);
  CPRN("%%%%\n");
  HPRN("SHARED_EXPORT t_params* Params();\n");
  HPRN("SHARED_EXPORT int Load_Params_File(char *filename);\n");
  HPRN("SHARED_EXPORT int Print_Params_File(char *filename);\n");
  print_epilogue();
}

tkv *kvpush(tkv *self, char* key, Type *value)
{ tkv *n = new_keyvalue();
  n->key = key;
  n->value = value;
  n->last = self;
  return n;
}


/* Line 189 of yacc.c  */
#line 803 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/schema.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     STRING = 258,
     COMMENT = 259
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 756 "schema.y"
 
  char *string;
  Type *type;
  


/* Line 214 of yacc.c  */
#line 850 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/schema.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 862 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/schema.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
//void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
//void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   16

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  9
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  5
/* YYNRULES -- Number of rules.  */
#define YYNRULES  12
/* YYNRULES -- Number of states.  */
#define YYNSTATES  21

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   259

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       5,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     6,     2,     7,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     8,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    14,    19,    22,    25,
      27,    31,    32
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      10,     0,    -1,    -1,    10,    11,    -1,     5,    -1,     3,
      12,    13,     5,    -1,     6,     3,     7,     5,    -1,    13,
       5,    -1,     1,     5,    -1,     3,    -1,    12,     8,     3,
      -1,    -1,     4,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   770,   770,   771,   774,   775,   776,   777,   778,   781,
     782,   784,   785
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRING", "COMMENT", "'\\n'", "'['",
  "']'", "'|'", "$accept", "input", "line", "value", "comment", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,    10,    91,    93,   124
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,     9,    10,    10,    11,    11,    11,    11,    11,    12,
      12,    13,    13
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     4,     4,     2,     2,     1,
       3,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,    12,     4,     0,     3,     0,
       8,     9,    11,     0,     7,     0,     0,     0,    10,     5,
       6
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     8,    12,     9
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -4
static const yytype_int8 yypact[] =
{
      -4,     0,    -4,    -3,     5,    -4,    -4,     6,    -4,     7,
      -4,    -4,     3,     8,    -4,    10,     9,    11,    -4,    -4,
      -4
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
      -4,    -4,    -4,    -4,    -2
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
       2,     3,    10,     4,     5,     6,     7,     5,    11,    13,
      16,    15,    14,    18,    19,    17,    20
};

static const yytype_uint8 yycheck[] =
{
       0,     1,     5,     3,     4,     5,     6,     4,     3,     3,
      12,     8,     5,     3,     5,     7,     5
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,     0,     1,     3,     4,     5,     6,    11,    13,
       5,     3,    12,     3,     5,     8,    13,     7,     3,     5,
       5
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

/* User initialization code.  */

/* Line 1242 of yacc.c  */
#line 766 "schema.y"
{ g_kv = new_keyvalue();
}

/* Line 1242 of yacc.c  */
#line 1883 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/schema.tab.c"

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 770 "schema.y"
    { debug_grammar("EMPTY INPUT\n"); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 771 "schema.y"
    { debug_grammar("LINE\n"); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 774 "schema.y"
    { debug_grammar("\tEMPTY LINE\n"); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 775 "schema.y"
    { debug_grammar("\tKV LINE Pushed\n"); g_kv=kvpush(g_kv,(yyvsp[(1) - (4)].string),(yyvsp[(2) - (4)].type));;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 776 "schema.y"
    { debug_grammar("\tSECTION\n"); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 777 "schema.y"
    { debug_grammar("\tCOMMENT LINE\n"); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 778 "schema.y"
    { yyerrok; ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 781 "schema.y"
    {(yyval.type)=gentype(NULL,(yyvsp[(1) - (1)].string)); debug_grammar("\t\tVALUE Root\n");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 782 "schema.y"
    {(yyval.type)=gentype((yyvsp[(1) - (3)].type),(yyvsp[(3) - (3)].string));   debug_grammar("\t\tVALUE Tail\n");;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 784 "schema.y"
    { debug_grammar("\t\tCOMMENT EMPTY\n"); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 785 "schema.y"
    { debug_grammar("\t\tCOMMENT TAIL\n"); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2141 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/schema.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 787 "schema.y"


int isnamechar(int c)
{ return isalpha(c) || isdigit(c) || c=='_';
}

FILE *fp=NULL;                                               // when a file is opened, this points to the file
int yylex(void)
{ int c;
  ASRT(fp);
  while( (c=getc(fp))==' '||c=='\t' );                       // skip whitespace
  if(c==0)
  { if(feof(fp))
      return 0;
    if(ferror(fp))
    { fprintf(stderr,"\t lex - Got error: %d\n",ferror(fp));
    }
  }

  if(isnamechar(c))                                          // process strings
  {
    int n,max=1024;
    char *str = malloc(max);
    ASRT(str);
    str[0] = c;
    n = 1;
    while(isnamechar(c=getc(fp)))
    { if(n>=max)
      { str = realloc(str, 1.2*n+50);
        ASRT(str);
      }
      str[n++]=c;
    }
    str[n]='\0';
    ungetc(c,fp);

    yylval.string = str;
    debug_lexer("\tlex - STRING: %s\n",str);
    return STRING;
  }

  if(c=='/')                                                 // process comments
  { int d;
    d=getc(fp);
    if(d=='/' || d=='*')
    { while( getc(fp)!='\n' );                               // read the rest of the line
      ungetc('\n',fp);
    }
    yylval.string = NULL;
    debug_lexer("\tlex - COMMENT\n");
    return COMMENT;
  }

  if(c==EOF)
  { debug_lexer("\tlex - EOF\n");
    kvprintall(g_kv);
    return 0;
  }
  return c;
}

void yyerror(char const *s)
{ fprintf(stderr,"Parse Error:\n---\n\t%s\n---\n",s);
} 

int
main(int argc,char* argv[])
{ int sts;
  //cfile = stdout;
  //hfile = stdout;
  if(argc!=4)
  { printf(
      "Usage:\n"
      "  %s <in parameters.schema> <out param.y> <out param.h>\n",argv[0]);
    return 111;
  }
  cfile = fopen(argv[2],"w");
  hfile = fopen(argv[3],"w");
  ASRT(cfile);
  ASRT(hfile);
  g_headername = argv[3];
  fp = fopen(argv[1],"r");
  ASRT(fp);
  sts = yyparse();
  fclose(fp);
  fclose(hfile);
  fclose(cfile);
  return sts;
}

