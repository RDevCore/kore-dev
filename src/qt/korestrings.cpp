

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *kore_strings[] = {
QT_TRANSLATE_NOOP("kore-core", ""
"(1 = keep tx meta data e.g. account owner and payment request information, 2 "
"= drop tx meta data)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Allow JSON-RPC connections from specified source. Valid for <ip> are a "
"single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
"a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
QT_TRANSLATE_NOOP("kore-core", ""
"An error occurred while setting up the RPC address %s port %u for listening: "
"%s"),
QT_TRANSLATE_NOOP("kore-core", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("kore-core", ""
"Bind to given address and whitelist peers connecting to it. Use [host]:port "
"notation for IPv6"),
QT_TRANSLATE_NOOP("kore-core", ""
"Bind to given address to listen for JSON-RPC connections. Use [host]:port "
"notation for IPv6. This option can be specified multiple times (default: "
"bind to all interfaces)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Cannot obtain a lock on data directory %s. kore Core is probably already "
"running."),
QT_TRANSLATE_NOOP("kore-core", ""
"Change automatic finalized budget voting behavior. mode=auto: Vote for only "
"exact finalized budget match to my generated budget. (string, default: auto)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Continuously rate-limit free transactions to <n>*1000 bytes per minute "
"(default:%u)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Create new files with system default permissions, instead of umask 077 (only "
"effective with disabled wallet functionality)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Delete all wallet transactions and only recover those parts of the "
"blockchain through -rescan on startup"),
QT_TRANSLATE_NOOP("kore-core", ""
"Disable all kore specific functionality (Masternodes, Obfuscation, SwiftTX, "
"Budgeting) (0-1, default: %u)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Distributed under the MIT software license, see the accompanying file "
"COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
QT_TRANSLATE_NOOP("kore-core", ""
"Enable spork administration functionality with the appropriate private key."),
QT_TRANSLATE_NOOP("kore-core", ""
"Enable swifttx, show confirmations for locked transactions (bool, default: "
"%s)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Enable use of automated obfuscation for funds stored in this wallet (0-1, "
"default: %u)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Enter regression test mode, which uses a special chain in which blocks can "
"be solved instantly."),
QT_TRANSLATE_NOOP("kore-core", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Error: Unsupported argument -socks found. Setting SOCKS version isn't "
"possible anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("kore-core", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Fees (in KORE/Kb) smaller than this are considered zero fee for relaying "
"(default: %s)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Fees (in KORE/Kb) smaller than this are considered zero fee for transaction "
"creation (default: %s)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Flush database activity from memory pool to disk log every <n> megabytes "
"(default: %u)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Found unconfirmed denominated outputs, will wait till they confirm to "
"continue."),
QT_TRANSLATE_NOOP("kore-core", ""
"How thorough the block verification of -checkblocks is (0-4, default: %u)"),
QT_TRANSLATE_NOOP("kore-core", ""
"If paytxfee is not set, include enough fee so transactions begin "
"confirmation on average within n blocks (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", ""
"In this mode -genproclimit controls how many blocks are generated "
"immediately."),
QT_TRANSLATE_NOOP("kore-core", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Keep the specified amount available for spending at all times (default: 0)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Log transaction priority and fee per kB when mining blocks (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Maintain a full transaction index, used by the getrawtransaction rpc call "
"(default: %u)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Maximum size of data in data carrier transactions we relay and mine "
"(default: %u)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Maximum total fees to use in a single wallet transaction, setting too low "
"may abort large transactions (default: %s)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Obfuscation uses exact denominated amounts to send funds, you might simply "
"need to anonymize some more coins."),
QT_TRANSLATE_NOOP("kore-core", ""
"Output debugging information (default: %u, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Provide liquidity to Obfuscation by infrequently mixing coins on a continual "
"basis (0-100, default: %u, 1=very frequent, high fees, 100=very infrequent, "
"low fees)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Require high priority for relaying free or low-fee transactions (default:%u)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Send trace/debug info to console instead of debug.log file (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Set the number of threads for coin generation if enabled (-1 = all cores, "
"default: %d)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Show N confirmations for a successfully locked transaction (0-9999, default: "
"%u)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Support filtering of blocks and transaction with bloom filters (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", ""
"SwiftTX requires inputs with at least 6 confirmations, you might need to "
"wait a few minutes and try again."),
QT_TRANSLATE_NOOP("kore-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"staking or merchant applications!"),
QT_TRANSLATE_NOOP("kore-core", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit <https://www.openssl.org/> and cryptographic software "
"written by Eric Young and UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("kore-core", ""
"To use kored, or the -server option to kore-qt, you must set an rpcpassword "
"in the configuration file:\n"
"%s\n"
"It is recommended you use the following random password:\n"
"rpcuser=korerpc\n"
"rpcpassword=%s\n"
"(you do not need to remember this password)\n"
"The username and password MUST NOT be the same.\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions.\n"
"It is also recommended to set alertnotify so you are notified of problems;\n"
"for example: alertnotify=echo %%s | mail -s \"kore Alert\" admin@foo.com\n"),
QT_TRANSLATE_NOOP("kore-core", ""
"Unable to bind to %s on this computer. kore Core is probably already running."),
QT_TRANSLATE_NOOP("kore-core", ""
"Unable to locate enough Obfuscation denominated funds for this transaction."),
QT_TRANSLATE_NOOP("kore-core", ""
"Unable to locate enough Obfuscation non-denominated funds for this "
"transaction that are not equal 1000 KORE."),
QT_TRANSLATE_NOOP("kore-core", ""
"Unable to locate enough funds for this transaction that are not equal 1000 "
"KORE."),
QT_TRANSLATE_NOOP("kore-core", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
"%s)"),
QT_TRANSLATE_NOOP("kore-core", ""
"Warning: -maxtxfee is set very high! Fees this large could be paid on a "
"single transaction."),
QT_TRANSLATE_NOOP("kore-core", ""
"Warning: -paytxfee is set very high! This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("kore-core", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong kore Core will not work properly."),
QT_TRANSLATE_NOOP("kore-core", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("kore-core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("kore-core", ""
"Warning: error reading wallet.dat! All keys read correctly, but transaction "
"data or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("kore-core", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("kore-core", ""
"Whitelist peers connecting from the given netmask or IP address. Can be "
"specified multiple times."),
QT_TRANSLATE_NOOP("kore-core", ""
"Whitelisted peers cannot be DoS banned and their transactions are always "
"relayed, even if they are already in the mempool, useful e.g. for a gateway"),
QT_TRANSLATE_NOOP("kore-core", ""
"You must specify a masternodeprivkey in the configuration. Please see "
"documentation for help."),
QT_TRANSLATE_NOOP("kore-core", "(10743 could be used only on mainnet)"),
QT_TRANSLATE_NOOP("kore-core", "(default: %s)"),
QT_TRANSLATE_NOOP("kore-core", "(default: 1)"),
QT_TRANSLATE_NOOP("kore-core", "(must be 10743 for mainnet)"),
QT_TRANSLATE_NOOP("kore-core", "<category> can be:"),
QT_TRANSLATE_NOOP("kore-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("kore-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("kore-core", "Accept public REST requests (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Acceptable ciphers (default: %s)"),
QT_TRANSLATE_NOOP("kore-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("kore-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("kore-core", "Already have that input."),
QT_TRANSLATE_NOOP("kore-core", "Always query for peer addresses via DNS lookup (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Attempt to force blockchain corruption recovery"),
QT_TRANSLATE_NOOP("kore-core", "Attempt to recover private keys from a corrupt wallet.dat"),
QT_TRANSLATE_NOOP("kore-core", "Block creation options:"),
QT_TRANSLATE_NOOP("kore-core", "Can't denominate: no compatible inputs left."),
QT_TRANSLATE_NOOP("kore-core", "Can't find random Masternode."),
QT_TRANSLATE_NOOP("kore-core", "Can't mix while sync in progress."),
QT_TRANSLATE_NOOP("kore-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("kore-core", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("kore-core", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("kore-core", "Cannot resolve -whitebind address: '%s'"),
QT_TRANSLATE_NOOP("kore-core", "Cannot write default address"),
QT_TRANSLATE_NOOP("kore-core", "Collateral not valid."),
QT_TRANSLATE_NOOP("kore-core", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("kore-core", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("kore-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("kore-core", "Connection options:"),
QT_TRANSLATE_NOOP("kore-core", "Copyright (C) 2009-%i The Bitcoin Core Developers"),
QT_TRANSLATE_NOOP("kore-core", "Copyright (C) 2014-%i The Dash Core Developers"),
QT_TRANSLATE_NOOP("kore-core", "Copyright (C) 2015-%i The kore Core Developers"),
QT_TRANSLATE_NOOP("kore-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("kore-core", "Could not parse -rpcbind value %s as network address"),
QT_TRANSLATE_NOOP("kore-core", "Could not parse masternode.conf"),
QT_TRANSLATE_NOOP("kore-core", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("kore-core", "Disable safemode, override a real safe mode event (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Discover own IP address (default: 1 when listening and no -externalip)"),
QT_TRANSLATE_NOOP("kore-core", "Display the stake modifier calculations in the debug.log file."),
QT_TRANSLATE_NOOP("kore-core", "Display verbose coin stake messages in the debug.log file."),
QT_TRANSLATE_NOOP("kore-core", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("kore-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("kore-core", "Done loading"),
QT_TRANSLATE_NOOP("kore-core", "Enable publish hash block in <address>"),
QT_TRANSLATE_NOOP("kore-core", "Enable publish hash transaction (locked via SwiftTX) in <address>"),
QT_TRANSLATE_NOOP("kore-core", "Enable publish hash transaction in <address>"),
QT_TRANSLATE_NOOP("kore-core", "Enable publish raw block in <address>"),
QT_TRANSLATE_NOOP("kore-core", "Enable publish raw transaction (locked via SwiftTX) in <address>"),
QT_TRANSLATE_NOOP("kore-core", "Enable publish raw transaction in <address>"),
QT_TRANSLATE_NOOP("kore-core", "Enable staking functionality (0-1, default: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Enable the client to act as a masternode (0-1, default: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Entries are full."),
QT_TRANSLATE_NOOP("kore-core", "Error connecting to Masternode."),
QT_TRANSLATE_NOOP("kore-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("kore-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("kore-core", "Error loading block database"),
QT_TRANSLATE_NOOP("kore-core", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("kore-core", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("kore-core", "Error loading wallet.dat: Wallet requires newer version of kore Core"),
QT_TRANSLATE_NOOP("kore-core", "Error opening block database"),
QT_TRANSLATE_NOOP("kore-core", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("kore-core", "Error recovering public key."),
QT_TRANSLATE_NOOP("kore-core", "Error"),
QT_TRANSLATE_NOOP("kore-core", "Error: A fatal internal error occured, see debug.log for details"),
QT_TRANSLATE_NOOP("kore-core", "Error: Can't select current denominated inputs"),
QT_TRANSLATE_NOOP("kore-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("kore-core", "Error: Unsupported argument -tor found, use -onion."),
QT_TRANSLATE_NOOP("kore-core", "Error: Wallet locked, unable to create transaction!"),
QT_TRANSLATE_NOOP("kore-core", "Error: You already have pending entries in the Obfuscation pool"),
QT_TRANSLATE_NOOP("kore-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("kore-core", "Failed to read block"),
QT_TRANSLATE_NOOP("kore-core", "Fee (in KORE/kB) to add to transactions you send (default: %s)"),
QT_TRANSLATE_NOOP("kore-core", "Finalizing transaction."),
QT_TRANSLATE_NOOP("kore-core", "Force safe mode (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Found enough users, signing ( waiting %s )"),
QT_TRANSLATE_NOOP("kore-core", "Found enough users, signing ..."),
QT_TRANSLATE_NOOP("kore-core", "Generate coins (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", "How many blocks to check at startup (default: %u, 0 = all)"),
QT_TRANSLATE_NOOP("kore-core", "If <category> is not supplied, output all debugging information."),
QT_TRANSLATE_NOOP("kore-core", "Importing..."),
QT_TRANSLATE_NOOP("kore-core", "Imports blocks from external blk000??.dat file"),
QT_TRANSLATE_NOOP("kore-core", "Include IP addresses in debug output (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Incompatible mode."),
QT_TRANSLATE_NOOP("kore-core", "Incompatible version."),
QT_TRANSLATE_NOOP("kore-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("kore-core", "Information"),
QT_TRANSLATE_NOOP("kore-core", "Initialization sanity check failed. kore Core is shutting down."),
QT_TRANSLATE_NOOP("kore-core", "Input is not valid."),
QT_TRANSLATE_NOOP("kore-core", "Insufficient funds."),
QT_TRANSLATE_NOOP("kore-core", "Invalid -onion address: '%s'"),
QT_TRANSLATE_NOOP("kore-core", "Invalid -proxy address: '%s'"),
QT_TRANSLATE_NOOP("kore-core", "Invalid amount for -maxtxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("kore-core", "Invalid amount for -minrelaytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("kore-core", "Invalid amount for -mintxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("kore-core", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("kore-core", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("kore-core", "Invalid amount for -reservebalance=<amount>"),
QT_TRANSLATE_NOOP("kore-core", "Invalid masternodeprivkey. Please see documenation."),
QT_TRANSLATE_NOOP("kore-core", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("kore-core", "Invalid port detected in masternode.conf"),
QT_TRANSLATE_NOOP("kore-core", "Invalid private key."),
QT_TRANSLATE_NOOP("kore-core", "Invalid script detected."),
QT_TRANSLATE_NOOP("kore-core", "Keep N KORE anonymized (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Last Obfuscation was too recent."),
QT_TRANSLATE_NOOP("kore-core", "Last successful Obfuscation action was too recent."),
QT_TRANSLATE_NOOP("kore-core", "Limit size of signature cache to <n> entries (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Line: %d"),
QT_TRANSLATE_NOOP("kore-core", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Listen for connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("kore-core", "Loading block index..."),
QT_TRANSLATE_NOOP("kore-core", "Loading budget cache..."),
QT_TRANSLATE_NOOP("kore-core", "Loading masternode cache..."),
QT_TRANSLATE_NOOP("kore-core", "Loading masternode payment cache..."),
QT_TRANSLATE_NOOP("kore-core", "Loading wallet... (%3.2f %%)"),
QT_TRANSLATE_NOOP("kore-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("kore-core", "Lock is already in place."),
QT_TRANSLATE_NOOP("kore-core", "Lock masternodes from masternode configuration file (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Maintain at most <n> connections to peers (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Masternode options:"),
QT_TRANSLATE_NOOP("kore-core", "Masternode queue is full."),
QT_TRANSLATE_NOOP("kore-core", "Masternode:"),
QT_TRANSLATE_NOOP("kore-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Missing input transaction information."),
QT_TRANSLATE_NOOP("kore-core", "Mixing in progress..."),
QT_TRANSLATE_NOOP("kore-core", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("kore-core", "No Masternodes detected."),
QT_TRANSLATE_NOOP("kore-core", "No compatible Masternode found."),
QT_TRANSLATE_NOOP("kore-core", "No funds detected in need of denominating."),
QT_TRANSLATE_NOOP("kore-core", "No matching denominations found for mixing."),
QT_TRANSLATE_NOOP("kore-core", "Node relay options:"),
QT_TRANSLATE_NOOP("kore-core", "Non-standard public key detected."),
QT_TRANSLATE_NOOP("kore-core", "Not compatible with existing transactions."),
QT_TRANSLATE_NOOP("kore-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("kore-core", "Not in the Masternode list."),
QT_TRANSLATE_NOOP("kore-core", "Number of automatic wallet backups (default: 10)"),
QT_TRANSLATE_NOOP("kore-core", "Obfuscation is idle."),
QT_TRANSLATE_NOOP("kore-core", "Obfuscation options:"),
QT_TRANSLATE_NOOP("kore-core", "Obfuscation request complete:"),
QT_TRANSLATE_NOOP("kore-core", "Obfuscation request incomplete:"),
QT_TRANSLATE_NOOP("kore-core", "Only accept block chain matching built-in checkpoints (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
QT_TRANSLATE_NOOP("kore-core", "Options:"),
QT_TRANSLATE_NOOP("kore-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("kore-core", "Prepend debug output with timestamp (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Print version and exit"),
QT_TRANSLATE_NOOP("kore-core", "RPC SSL options: (see the Bitcoin Wiki for SSL setup instructions)"),
QT_TRANSLATE_NOOP("kore-core", "RPC server options:"),
QT_TRANSLATE_NOOP("kore-core", "RPC support for HTTP persistent connections (default: %d)"),
QT_TRANSLATE_NOOP("kore-core", "Randomly drop 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("kore-core", "Randomly fuzz 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("kore-core", "Rebuild block chain index from current blk000??.dat files"),
QT_TRANSLATE_NOOP("kore-core", "Receive and display P2P network alerts (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Relay and mine data carrier transactions (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Relay non-P2SH multisig (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("kore-core", "Rescanning..."),
QT_TRANSLATE_NOOP("kore-core", "Run a thread to flush wallet periodically (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("kore-core", "Send transactions as zero-fee transactions if possible (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Server certificate file (default: %s)"),
QT_TRANSLATE_NOOP("kore-core", "Server private key (default: %s)"),
QT_TRANSLATE_NOOP("kore-core", "Session not complete!"),
QT_TRANSLATE_NOOP("kore-core", "Session timed out."),
QT_TRANSLATE_NOOP("kore-core", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("kore-core", "Set external address:port to get to this masternode (example: %s)"),
QT_TRANSLATE_NOOP("kore-core", "Set key pool size to <n> (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Set maximum block size in bytes (default: %d)"),
QT_TRANSLATE_NOOP("kore-core", "Set minimum block size in bytes (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Set the masternode private key"),
QT_TRANSLATE_NOOP("kore-core", "Set the number of threads to service RPC calls (default: %d)"),
QT_TRANSLATE_NOOP("kore-core", "Sets the DB_PRIVATE flag in the wallet db environment (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("kore-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("kore-core", "Signing failed."),
QT_TRANSLATE_NOOP("kore-core", "Signing timed out."),
QT_TRANSLATE_NOOP("kore-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("kore-core", "Specify configuration file (default: %s)"),
QT_TRANSLATE_NOOP("kore-core", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
QT_TRANSLATE_NOOP("kore-core", "Specify data directory"),
QT_TRANSLATE_NOOP("kore-core", "Specify masternode configuration file (default: %s)"),
QT_TRANSLATE_NOOP("kore-core", "Specify pid file (default: %s)"),
QT_TRANSLATE_NOOP("kore-core", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("kore-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("kore-core", "Spend unconfirmed change when sending transactions (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Staking options:"),
QT_TRANSLATE_NOOP("kore-core", "Stop running after importing blocks from disk (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Submitted following entries to masternode: %u / %d"),
QT_TRANSLATE_NOOP("kore-core", "Submitted to masternode, waiting for more entries ( %u / %d ) %s"),
QT_TRANSLATE_NOOP("kore-core", "Submitted to masternode, waiting in queue %s"),
QT_TRANSLATE_NOOP("kore-core", "SwiftTX options:"),
QT_TRANSLATE_NOOP("kore-core", "Synchronization failed"),
QT_TRANSLATE_NOOP("kore-core", "Synchronization finished"),
QT_TRANSLATE_NOOP("kore-core", "Synchronization pending..."),
QT_TRANSLATE_NOOP("kore-core", "Synchronizing budgets..."),
QT_TRANSLATE_NOOP("kore-core", "Synchronizing masternode winners..."),
QT_TRANSLATE_NOOP("kore-core", "Synchronizing masternodes..."),
QT_TRANSLATE_NOOP("kore-core", "Synchronizing sporks..."),
QT_TRANSLATE_NOOP("kore-core", "This help message"),
QT_TRANSLATE_NOOP("kore-core", "This is experimental software."),
QT_TRANSLATE_NOOP("kore-core", "This is intended for regression testing tools and app development."),
QT_TRANSLATE_NOOP("kore-core", "This is not a Masternode."),
QT_TRANSLATE_NOOP("kore-core", "Threshold for disconnecting misbehaving peers (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("kore-core", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("kore-core", "Transaction created successfully."),
QT_TRANSLATE_NOOP("kore-core", "Transaction fees are too high."),
QT_TRANSLATE_NOOP("kore-core", "Transaction not valid."),
QT_TRANSLATE_NOOP("kore-core", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("kore-core", "Transaction too large"),
QT_TRANSLATE_NOOP("kore-core", "Transmitting final transaction."),
QT_TRANSLATE_NOOP("kore-core", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("kore-core", "Unable to sign spork message, wrong key?"),
QT_TRANSLATE_NOOP("kore-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("kore-core", "Unknown state: id = %u"),
QT_TRANSLATE_NOOP("kore-core", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("kore-core", "Use N separate masternodes to anonymize funds  (2-8, default: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Use OpenSSL (https) for JSON-RPC connections"),
QT_TRANSLATE_NOOP("kore-core", "Use UPnP to map the listening port (default: %u)"),
QT_TRANSLATE_NOOP("kore-core", "Use UPnP to map the listening port (default: 1 when listening)"),
QT_TRANSLATE_NOOP("kore-core", "Use the test network"),
QT_TRANSLATE_NOOP("kore-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("kore-core", "Value more than Obfuscation pool maximum allows."),
QT_TRANSLATE_NOOP("kore-core", "Verifying blocks..."),
QT_TRANSLATE_NOOP("kore-core", "Verifying wallet..."),
QT_TRANSLATE_NOOP("kore-core", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("kore-core", "Wallet is locked."),
QT_TRANSLATE_NOOP("kore-core", "Wallet needed to be rewritten: restart kore Core to complete"),
QT_TRANSLATE_NOOP("kore-core", "Wallet options:"),
QT_TRANSLATE_NOOP("kore-core", "Wallet window title"),
QT_TRANSLATE_NOOP("kore-core", "Warning"),
QT_TRANSLATE_NOOP("kore-core", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("kore-core", "Warning: Unsupported argument -benchmark ignored, use -debug=bench."),
QT_TRANSLATE_NOOP("kore-core", "Warning: Unsupported argument -debugnet ignored, use -debug=net."),
QT_TRANSLATE_NOOP("kore-core", "Will retry..."),
QT_TRANSLATE_NOOP("kore-core", "You need to rebuild the database using -reindex to change -txindex"),
QT_TRANSLATE_NOOP("kore-core", "Your entries added successfully."),
QT_TRANSLATE_NOOP("kore-core", "Your transaction was accepted into the pool!"),
QT_TRANSLATE_NOOP("kore-core", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("kore-core", "ZeroMQ notification options:"),
QT_TRANSLATE_NOOP("kore-core", "on startup"),
QT_TRANSLATE_NOOP("kore-core", "wallet.dat corrupt, salvage failed"),
};
