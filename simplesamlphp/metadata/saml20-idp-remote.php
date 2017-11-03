<?php
$metadata['http://adfs.odsherred.dk/adfs/services/trust'] = array (
  'entityid' => 'http://adfs.odsherred.dk/adfs/services/trust',
  'contacts' => 
  array (
    0 => 
    array (
      'contactType' => 'support',
      'emailAddress' => 
      array (
        0 => '',
      ),
      'telephoneNumber' => 
      array (
        0 => '',
      ),
    ),
  ),
  'metadata-set' => 'saml20-idp-remote',
  'SingleSignOnService' => 
  array (
    0 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Redirect',
      'Location' => 'https://adfs.odsherred.dk/adfs/ls/',
    ),
    1 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://adfs.odsherred.dk/adfs/ls/',
    ),
  ),
  'SingleLogoutService' => 
  array (
    0 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Redirect',
      'Location' => 'https://adfs.odsherred.dk/adfs/ls/',
    ),
    1 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://adfs.odsherred.dk/adfs/ls/',
    ),
  ),
  'ArtifactResolutionService' => 
  array (
#    0 =>
#    array (
#      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:SOAP',
#      'Location' => 'https://adfs.odsherred.dk/adfs/services/trust/artifactresolution',
#      'index' => 0,
#    ),
  ),
  'keys' => 
  array (
    0 => 
    array (
      'encryption' => true,
      'signing' => false,
      'type' => 'X509Certificate',
      'X509Certificate' => '
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
',
    ),
    1 => 
    array (
      'encryption' => false,
      'signing' => true,
      'type' => 'X509Certificate',
      'X509Certificate' => '
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
',
    ),
  ),
);
