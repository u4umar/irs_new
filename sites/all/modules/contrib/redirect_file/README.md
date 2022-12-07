Overview
--------------------------------------------------------------------------------

This module provides support for redirecting public file assets. 

The following problem exists with the redirect module:

1. Create a redirect from /sites/default/files/test.pdf to http://google.com
2. If the file exists, the redirect will not work.
3. If the file does not exist, the redirect will work.

The solution to this problem is to simply move test.pdf when a redirect
from /sites/default/files/test.pdf is created. This module adds a new 
'Rename existing source file' checkbox on the 'Create redirect' form, which 
will perform this file move when a redirect is created for a file asset
residing in the public files directory.

Troubleshooting
--------------------------------------------------------------------------------

If you are getting a 404 for a public file, please verify that the file 
extension is not handled by fast_404.
