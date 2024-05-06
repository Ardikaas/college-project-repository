(() => {
  'use strict'
  const forms = document.querySelectorAll('.needs-validation')

  Array.from(forms).forEach(form => {
    form.addEventListener('submit', event => {
      if (!form.checkValidity()) {
        event.preventDefault()
        event.stopPropagation()
      }

      form.classList.add('was-validated')
    }, false)
  })
})()

const mode = document.getElementById('colorMode')

function darkMode(){
  if (mode.checked){
    document.documentElement.setAttribute('data-bs-theme', 'dark')
  }else{
    document.documentElement.removeAttribute('data-bs-theme')
  }

}
mode.addEventListener('change', darkMode);