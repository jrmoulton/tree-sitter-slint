
; [
; (struct_definition)
; (component_definition)
; ] @indent

(field_declaration_list) @indent

; [
;   "{"
;   "}"
;   "("
;   ")"
;   (if_statement)
;   "else if"
;   "else"
; ] @branch

"{" @indent
"}" @indent_end

(comment) @auto

(string) @auto

