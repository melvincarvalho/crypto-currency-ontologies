@prefix rdf: <http://www.w3.org/1999/02/22-rdf-syntax-ns#> .

<#>
    <http://purl.org/dc/terms/created> "2013-10-13"^^<http://www.w3.org/2001/XMLSchema#date> ;
    a <http://www.w3.org/2002/07/owl#Ontology> ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
   Ontology for crypto currencies.
   This is in development.
   Ontology for Crypto Currencies:
     * bitcoin
     * bitmark
     * alt coins
     * others
   """@en ;
    <http://www.w3.org/2000/01/rdf-schema#label> "Ontology for Crypto Currencies." ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" ;
    <http://xmlns.com/foaf/0.1/maker> <http://melvincarvalho.com/#me> .

<#BlockHeader>
    a rdf:Class ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       A Block Header for a crypto currency
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "BlockHeader"@en, "Credit"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#Credit>
    a rdf:Class ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       A Credit / IOU between two parties.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "Credit"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#CreditChain>
    a rdf:Class ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       A chain of credits, e.g. in a document.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "CreditChain"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#HDPrivateKey>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       A Hierarchical deterministic private key according to bitcoin BIP 39
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "HDPrivateKey"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#HDPublicKey>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       A Hierarchical deterministic public key according to bitcoin BIP 39
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "HDPublicKey"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#IronWallet>
    a rdf:Class ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       A multi user wallet of according to the Iron Wallet rules for webcredits.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "IronWallet"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#Ledger>
    a rdf:Class ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       A ledger containin user / amount pairs.  Ledgers derive a currency from the parent.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "Ledger"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#MerkleRoot>
    a rdf:Class ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       The root of a merkle tree, of items
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "MerkleRoot"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#TransactionInput>
    a rdf:Class ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       A Block Transaction Input for a crypto currency
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "TransactionInput"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#TransactionOutput>
    a rdf:Class ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       A Block Transaction Output for a crypto currency
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "TransactionOutput"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#Wallet>
    a rdf:Class ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       A multi user wallet
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "Wallet"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#WashWallet>
    a rdf:Class ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       A multi user webcredits wallet designed as a cache that will go to zero.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "WashWallet"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#amount>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       The amount of a credit between two entities.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "amount"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#bitcoin>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       This represents a bitcoin address which should be a bitcoin: URI
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "bitcoin"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#bit>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       This represents a 1000000th of a bitcoin
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "bit"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#bitmark>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       This represents a bitcoin address which should be a bitmark: URI
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "bitmark"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#blockHeaderHash>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       A hash of a block (traditionally sha256)
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "blockHeaderHash"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#context>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       The context of a credit eg why it was created, as a URI.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "context"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#creditChain>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       Relates a wallet to a credit chain.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "creditChain"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#created>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       Approximate time something was created, similar to very dcterms created but may have an error term.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "created"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#currency>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       The currency of a credit between two entities, as a URI.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "currency"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#description>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       The destination of a credit between two entities.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "description"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#destination>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       The destination of a credit between two entities.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "destination"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#faucet>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       A faucet that gives out free currency
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "faucet"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#hasInput>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       A block transaction has an input.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "hasInput"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#hasOutput>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       A block transaction has an ouput.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "hasOutput"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#hasTransaction>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       The block chain has a transaction.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "hasTransaction"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#height>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       The height according to the longest chain.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "height"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#inbox>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       Inbox for new transactions
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "inbox"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#index>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       The index number of an input or output, sometimes referred to as vout or n
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "index"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#latestBlockHeader>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       The latest block header for an electronic coin.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "latestBlockHeader"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#ledger>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       Relates a wallet to a ledger
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "ledger"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#lockTime>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       This is the lock time.  For bitcoin if non-zero and sequence numbers are < 0xFFFFFFFF: block height or timestamp when transaction is final
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "lockTime"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#mark>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       A mark is used to indicate approval of an honest actor (based on their URI).  This adds a meta layer of micro trust over the zero trust protocol, allowing, for example, thin clients to make storage / delegation trade-offs.  The term is overloaded as a dual meaning which also represents 1/1000th of the bitmark currency.  Arguably this term belongs in a new vocab, which may be added in future.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "mark"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#mBTC>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       This represents a 1000th of a bitcoin
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "bit"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#nbits>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       This is the term used in the bitcoin reference client.  It is the target, but in a compact and custom 4-byte encoding.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "nbits"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#payment>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       Related an activity stream Activity to a payment
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "payment"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#previousBlockHeader>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       The previous block header
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "previousBlockHeader"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#protocolSpecification>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       The protocol used to verify electronic coins.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "protocolSpecification"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#scriptSig>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       The input scriptSig
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "scriptSig"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#sequence>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       Transaction sequence.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "sequence"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#source>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       The source of a credit between two entities.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "source"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#testnet3>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       This represents a bitcoin testnet3 address which should be a bitcoin: URI
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "testnet3"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#testnetBTC>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       A testnet bitcoin
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "testnetBTC"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#testnetMBTC>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       A testnet 1000th of a bitcoin
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "testnetMBTC"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#testnetBit>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       A testnet 1000000th bitcoin
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "testnetBit"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#tx>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       Where transactions are stored
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "tx"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#variable>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       A variable symbol that can be sent with a transaction.  Not part of web credits core.
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "variable"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .

<#wallet>
    a rdf:Property ;
    <http://www.w3.org/2000/01/rdf-schema#comment> """
       Relates a user to a wallet URI
    """@en ;
    <http://www.w3.org/2000/01/rdf-schema#isDefinedBy> <cc#> ;
    <http://www.w3.org/2000/01/rdf-schema#label> "wallet"@en ;
    <http://www.w3.org/2003/06/sw-vocab-status/ns#term_status> "unstable" .
