@prefix rdf: <http://www.w3.org/1999/02/22-rdf-syntax-ns#> .

<http://www.w3.org/ns/auth/cc#>
    <http://purl.org/dc/terms/created> "2013-10-13"^^<http://www.w3.org/2001/XMLSchema#date> ;
    a <http://www.w3.org/2002/07/owl#Ontology> ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
   Ontology for Certificates and crypto stuff.
   This is in development. 
   Ontology for Crypto Currencies:
     * bitcoin
     * alt coins
     * ripple
     * others
   """@en ;
    <http://www.w3.org/2000/01/rdf-schema#label> "Ontology for Crypto Currencies." ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" ;
    <http://xmlns.com/foaf/0.1/maker> <http://melvincarvalho.com/#me> .

<http://www.w3.org/ns/auth/cc#BlockHeader>
    a rdf:Class ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       A Block Header for a crypto currency
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "BlockHeader"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<http://www.w3.org/ns/auth/cc#ElectronicCoin>
    a rdf:Class ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       We define an Electronic coin as a chain of digital signatures.  As per Satoshi's paper.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "ElectronicCoin"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<http://www.w3.org/ns/auth/cc#MerkleRoot>
    a rdf:Class ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       The root of a merkle tree, of items
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "MerkleRoot"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<http://www.w3.org/ns/auth/cc#TransactionInput>
    a rdf:Class ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       A Block Transaction Input for a crypto currency
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "TransactionInput"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<http://www.w3.org/ns/auth/cc#TransactionOutput>
    a rdf:Class ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       A Block Transaction Output for a crypto currency
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "TransactionOutput"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<http://www.w3.org/ns/auth/cc#bitcoin>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       This represents a bitcoin address which should be a bitcoin: URI
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "bitcoin"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<http://www.w3.org/ns/auth/cc#blockHeaderHash>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       A hash of a block (traditionally sha256)
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "blockHeaderHash"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<http://www.w3.org/ns/auth/cc#hasInput>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       A block transaction has an input.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "hasInput"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<http://www.w3.org/ns/auth/cc#hasOutput>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       A block transaction has an ouput.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "hasOutput"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<http://www.w3.org/ns/auth/cc#hasTransaction>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       The block chain has a transaction.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "hasTransaction"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<http://www.w3.org/ns/auth/cc#height>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       The height according to the longest chain.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "height"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<http://www.w3.org/ns/auth/cc#index>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       The index number of an input or output, sometimes referred to as vout or n
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "index"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<http://www.w3.org/ns/auth/cc#latestBlockHeader>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       The latest block header for an electronic coin.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "latestBlockHeader"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<http://www.w3.org/ns/auth/cc#lockTime>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       This is the lock time.  For bitcoin if non-zero and sequence numbers are < 0xFFFFFFFF: block height or timestamp when transaction is final
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "lockTime"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<http://www.w3.org/ns/auth/cc#nbits>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       This is the term used in the bitcoin reference client.  It is the target, but in a compact and custom 4-byte encoding.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "nbits"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<http://www.w3.org/ns/auth/cc#previousBlockHeader>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       The previous block header
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "previousBlockHeader"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<http://www.w3.org/ns/auth/cc#protocolSpecification>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       The protocol used to verify electronic coins.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "protocolSpecification"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<http://www.w3.org/ns/auth/cc#scriptSig>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       The input scriptSig
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "scriptSig"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<http://www.w3.org/ns/auth/cc#sequence>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       Transaction sequence.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "sequence"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<http://www.w3.org/ns/auth/cc#testnet3>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       This represents a bitcoin testnet3 address which should be a bitcoin: URI
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "testnet3"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<http://www.w3.org/ns/auth/cc#timestamp>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       A unix timestamp for crypto blocks
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "timestamp"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<http://www.w3.org/ns/auth/cc#transactionMerkleRoot>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       The hash of the merkle tree of transactions.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "transactionMerkleRoot"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

