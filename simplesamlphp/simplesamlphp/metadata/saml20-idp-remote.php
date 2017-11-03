<?php
$metadata['http://adfs.test-intranet.odsherred.dk/adfs/services/trust'] = array (
  'entityid' => 'http://adfs.dk/adfs/t-intranet.odsherred.ervices/trust',
  'contacts' => 
  array (
    0 => 
    array (
      'contactType' => 'support',
    ),
  ),
  'metadata-set' => 'saml20-idp-remote',
  'SingleSignOnService' => 
  array (
    0 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Redirect',
      'Location' => 'https://adfs.test-intranet.odsherred.dk/adfs/ls/',
    ),
    1 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://adfs.test-intranet.odsherred.dk/adfs/ls/',
    ),
  ),
  'SingleLogoutService' => 
  array (
    0 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Redirect',
      'Location' => 'https://adfs.test-intranet.odsherred.dk/adfs/ls/',
    ),
    1 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://adfs.test-intranet.odsherred.dk/adfs/ls/',
    ),
  ),
  'ArtifactResolutionService' => 
  array (
  ),
  'keys' => 
  array (
    0 => 
    array (
      'encryption' => true,
      'signing' => false,
      'type' => 'X509Certificate',
      'X509Certificate' => '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',
    ),
    1 => 
    array (
      'encryption' => false,
      'signing' => true,
      'type' => 'X509Certificate',
      'X509Certificate' => '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',
    ),
  ),
);

