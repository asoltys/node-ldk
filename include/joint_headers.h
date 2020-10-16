#if defined(__GNUC__)
#define MUST_USE_STRUCT __attribute__((warn_unused))
#else
#define MUST_USE_STRUCT
#endif
#if defined(__GNUC__)
#define MUST_USE_RES __attribute__((warn_unused_result))
#else
#define MUST_USE_RES
#endif
struct nativeChannelHandshakeConfigOpaque;
typedef struct nativeChannelHandshakeConfigOpaque LDKnativeChannelHandshakeConfig;
struct nativeChannelHandshakeLimitsOpaque;
typedef struct nativeChannelHandshakeLimitsOpaque LDKnativeChannelHandshakeLimits;
struct nativeChannelConfigOpaque;
typedef struct nativeChannelConfigOpaque LDKnativeChannelConfig;
struct nativeUserConfigOpaque;
typedef struct nativeUserConfigOpaque LDKnativeUserConfig;
struct nativeChainMonitorOpaque;
typedef struct nativeChainMonitorOpaque LDKnativeChainMonitor;
struct nativeChannelMonitorUpdateOpaque;
typedef struct nativeChannelMonitorUpdateOpaque LDKnativeChannelMonitorUpdate;
struct nativeMonitorUpdateErrorOpaque;
typedef struct nativeMonitorUpdateErrorOpaque LDKnativeMonitorUpdateError;
struct nativeMonitorEventOpaque;
typedef struct nativeMonitorEventOpaque LDKnativeMonitorEvent;
struct nativeHTLCUpdateOpaque;
typedef struct nativeHTLCUpdateOpaque LDKnativeHTLCUpdate;
struct nativeChannelMonitorOpaque;
typedef struct nativeChannelMonitorOpaque LDKnativeChannelMonitor;
struct nativeOutPointOpaque;
typedef struct nativeOutPointOpaque LDKnativeOutPoint;
struct LDKChannelKeys;
typedef struct LDKChannelKeys LDKChannelKeys;
struct nativeInMemoryChannelKeysOpaque;
typedef struct nativeInMemoryChannelKeysOpaque LDKnativeInMemoryChannelKeys;
struct nativeKeysManagerOpaque;
typedef struct nativeKeysManagerOpaque LDKnativeKeysManager;
struct nativeChannelManagerOpaque;
typedef struct nativeChannelManagerOpaque LDKnativeChannelManager;
struct nativeChannelDetailsOpaque;
typedef struct nativeChannelDetailsOpaque LDKnativeChannelDetails;
struct nativePaymentSendFailureOpaque;
typedef struct nativePaymentSendFailureOpaque LDKnativePaymentSendFailure;
struct nativeChannelManagerReadArgsOpaque;
typedef struct nativeChannelManagerReadArgsOpaque LDKnativeChannelManagerReadArgs;
struct nativeDecodeErrorOpaque;
typedef struct nativeDecodeErrorOpaque LDKnativeDecodeError;
struct nativeInitOpaque;
typedef struct nativeInitOpaque LDKnativeInit;
struct nativeErrorMessageOpaque;
typedef struct nativeErrorMessageOpaque LDKnativeErrorMessage;
struct nativePingOpaque;
typedef struct nativePingOpaque LDKnativePing;
struct nativePongOpaque;
typedef struct nativePongOpaque LDKnativePong;
struct nativeOpenChannelOpaque;
typedef struct nativeOpenChannelOpaque LDKnativeOpenChannel;
struct nativeAcceptChannelOpaque;
typedef struct nativeAcceptChannelOpaque LDKnativeAcceptChannel;
struct nativeFundingCreatedOpaque;
typedef struct nativeFundingCreatedOpaque LDKnativeFundingCreated;
struct nativeFundingSignedOpaque;
typedef struct nativeFundingSignedOpaque LDKnativeFundingSigned;
struct nativeFundingLockedOpaque;
typedef struct nativeFundingLockedOpaque LDKnativeFundingLocked;
struct nativeShutdownOpaque;
typedef struct nativeShutdownOpaque LDKnativeShutdown;
struct nativeClosingSignedOpaque;
typedef struct nativeClosingSignedOpaque LDKnativeClosingSigned;
struct nativeUpdateAddHTLCOpaque;
typedef struct nativeUpdateAddHTLCOpaque LDKnativeUpdateAddHTLC;
struct nativeUpdateFulfillHTLCOpaque;
typedef struct nativeUpdateFulfillHTLCOpaque LDKnativeUpdateFulfillHTLC;
struct nativeUpdateFailHTLCOpaque;
typedef struct nativeUpdateFailHTLCOpaque LDKnativeUpdateFailHTLC;
struct nativeUpdateFailMalformedHTLCOpaque;
typedef struct nativeUpdateFailMalformedHTLCOpaque LDKnativeUpdateFailMalformedHTLC;
struct nativeCommitmentSignedOpaque;
typedef struct nativeCommitmentSignedOpaque LDKnativeCommitmentSigned;
struct nativeRevokeAndACKOpaque;
typedef struct nativeRevokeAndACKOpaque LDKnativeRevokeAndACK;
struct nativeUpdateFeeOpaque;
typedef struct nativeUpdateFeeOpaque LDKnativeUpdateFee;
struct nativeDataLossProtectOpaque;
typedef struct nativeDataLossProtectOpaque LDKnativeDataLossProtect;
struct nativeChannelReestablishOpaque;
typedef struct nativeChannelReestablishOpaque LDKnativeChannelReestablish;
struct nativeAnnouncementSignaturesOpaque;
typedef struct nativeAnnouncementSignaturesOpaque LDKnativeAnnouncementSignatures;
struct nativeUnsignedNodeAnnouncementOpaque;
typedef struct nativeUnsignedNodeAnnouncementOpaque LDKnativeUnsignedNodeAnnouncement;
struct nativeNodeAnnouncementOpaque;
typedef struct nativeNodeAnnouncementOpaque LDKnativeNodeAnnouncement;
struct nativeUnsignedChannelAnnouncementOpaque;
typedef struct nativeUnsignedChannelAnnouncementOpaque LDKnativeUnsignedChannelAnnouncement;
struct nativeChannelAnnouncementOpaque;
typedef struct nativeChannelAnnouncementOpaque LDKnativeChannelAnnouncement;
struct nativeUnsignedChannelUpdateOpaque;
typedef struct nativeUnsignedChannelUpdateOpaque LDKnativeUnsignedChannelUpdate;
struct nativeChannelUpdateOpaque;
typedef struct nativeChannelUpdateOpaque LDKnativeChannelUpdate;
struct nativeQueryChannelRangeOpaque;
typedef struct nativeQueryChannelRangeOpaque LDKnativeQueryChannelRange;
struct nativeReplyChannelRangeOpaque;
typedef struct nativeReplyChannelRangeOpaque LDKnativeReplyChannelRange;
struct nativeQueryShortChannelIdsOpaque;
typedef struct nativeQueryShortChannelIdsOpaque LDKnativeQueryShortChannelIds;
struct nativeReplyShortChannelIdsEndOpaque;
typedef struct nativeReplyShortChannelIdsEndOpaque LDKnativeReplyShortChannelIdsEnd;
struct nativeGossipTimestampFilterOpaque;
typedef struct nativeGossipTimestampFilterOpaque LDKnativeGossipTimestampFilter;
struct nativeLightningErrorOpaque;
typedef struct nativeLightningErrorOpaque LDKnativeLightningError;
struct nativeCommitmentUpdateOpaque;
typedef struct nativeCommitmentUpdateOpaque LDKnativeCommitmentUpdate;
struct nativeMessageHandlerOpaque;
typedef struct nativeMessageHandlerOpaque LDKnativeMessageHandler;
struct nativePeerHandleErrorOpaque;
typedef struct nativePeerHandleErrorOpaque LDKnativePeerHandleError;
struct nativePeerManagerOpaque;
typedef struct nativePeerManagerOpaque LDKnativePeerManager;
struct nativeTxCreationKeysOpaque;
typedef struct nativeTxCreationKeysOpaque LDKnativeTxCreationKeys;
struct nativePreCalculatedTxCreationKeysOpaque;
typedef struct nativePreCalculatedTxCreationKeysOpaque LDKnativePreCalculatedTxCreationKeys;
struct nativeChannelPublicKeysOpaque;
typedef struct nativeChannelPublicKeysOpaque LDKnativeChannelPublicKeys;
struct nativeHTLCOutputInCommitmentOpaque;
typedef struct nativeHTLCOutputInCommitmentOpaque LDKnativeHTLCOutputInCommitment;
struct nativeHolderCommitmentTransactionOpaque;
typedef struct nativeHolderCommitmentTransactionOpaque LDKnativeHolderCommitmentTransaction;
struct nativeInitFeaturesOpaque;
typedef struct nativeInitFeaturesOpaque LDKnativeInitFeatures;
struct nativeNodeFeaturesOpaque;
typedef struct nativeNodeFeaturesOpaque LDKnativeNodeFeatures;
struct nativeChannelFeaturesOpaque;
typedef struct nativeChannelFeaturesOpaque LDKnativeChannelFeatures;
struct nativeRouteHopOpaque;
typedef struct nativeRouteHopOpaque LDKnativeRouteHop;
struct nativeRouteOpaque;
typedef struct nativeRouteOpaque LDKnativeRoute;
struct nativeRouteHintOpaque;
typedef struct nativeRouteHintOpaque LDKnativeRouteHint;
struct nativeNetworkGraphOpaque;
typedef struct nativeNetworkGraphOpaque LDKnativeNetworkGraph;
struct nativeLockedNetworkGraphOpaque;
typedef struct nativeLockedNetworkGraphOpaque LDKnativeLockedNetworkGraph;
struct nativeNetGraphMsgHandlerOpaque;
typedef struct nativeNetGraphMsgHandlerOpaque LDKnativeNetGraphMsgHandler;
struct nativeDirectionalChannelInfoOpaque;
typedef struct nativeDirectionalChannelInfoOpaque LDKnativeDirectionalChannelInfo;
struct nativeChannelInfoOpaque;
typedef struct nativeChannelInfoOpaque LDKnativeChannelInfo;
struct nativeRoutingFeesOpaque;
typedef struct nativeRoutingFeesOpaque LDKnativeRoutingFees;
struct nativeNodeAnnouncementInfoOpaque;
typedef struct nativeNodeAnnouncementInfoOpaque LDKnativeNodeAnnouncementInfo;
struct nativeNodeInfoOpaque;
typedef struct nativeNodeInfoOpaque LDKnativeNodeInfo;
/* Text to put at the beginning of the generated file. Probably a license. */

/* Generated with cbindgen:0.14.4 */

/* Warning, this file is autogenerated by cbindgen. Don't modify this manually. */

#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

/**
 * An error when accessing the chain via [`Access`].
 *
 * [`Access`]: trait.Access.html
 */
typedef enum LDKAccessError {
   /**
    * The requested chain is unknown.
    */
   LDKAccessError_UnknownChain,
   /**
    * The requested transaction doesn't exist or hasn't confirmed.
    */
   LDKAccessError_UnknownTx,
   /**
    * Must be last for serialization purposes
    */
   LDKAccessError_Sentinel,
} LDKAccessError;

/**
 * An error enum representing a failure to persist a channel monitor update.
 */
typedef enum LDKChannelMonitorUpdateErr {
   /**
    * Used to indicate a temporary failure (eg connection to a watchtower or remote backup of
    * our state failed, but is expected to succeed at some point in the future).
    *
    * Such a failure will \"freeze\" a channel, preventing us from revoking old states or
    * submitting new commitment transactions to the counterparty. Once the update(s) which failed
    * have been successfully applied, ChannelManager::channel_monitor_updated can be used to
    * restore the channel to an operational state.
    *
    * Note that a given ChannelManager will *never* re-generate a given ChannelMonitorUpdate. If
    * you return a TemporaryFailure you must ensure that it is written to disk safely before
    * writing out the latest ChannelManager state.
    *
    * Even when a channel has been \"frozen\" updates to the ChannelMonitor can continue to occur
    * (eg if an inbound HTLC which we forwarded was claimed upstream resulting in us attempting
    * to claim it on this channel) and those updates must be applied wherever they can be. At
    * least one such updated ChannelMonitor must be persisted otherwise PermanentFailure should
    * be returned to get things on-chain ASAP using only the in-memory copy. Obviously updates to
    * the channel which would invalidate previous ChannelMonitors are not made when a channel has
    * been \"frozen\".
    *
    * Note that even if updates made after TemporaryFailure succeed you must still call
    * channel_monitor_updated to ensure you have the latest monitor and re-enable normal channel
    * operation.
    *
    * Note that the update being processed here will not be replayed for you when you call
    * ChannelManager::channel_monitor_updated, so you must store the update itself along
    * with the persisted ChannelMonitor on your own local disk prior to returning a
    * TemporaryFailure. You may, of course, employ a journaling approach, storing only the
    * ChannelMonitorUpdate on disk without updating the monitor itself, replaying the journal at
    * reload-time.
    *
    * For deployments where a copy of ChannelMonitors and other local state are backed up in a
    * remote location (with local copies persisted immediately), it is anticipated that all
    * updates will return TemporaryFailure until the remote copies could be updated.
    */
   LDKChannelMonitorUpdateErr_TemporaryFailure,
   /**
    * Used to indicate no further channel monitor updates will be allowed (eg we've moved on to a
    * different watchtower and cannot update with all watchtowers that were previously informed
    * of this channel).
    *
    * At reception of this error, ChannelManager will force-close the channel and return at
    * least a final ChannelMonitorUpdate::ChannelForceClosed which must be delivered to at
    * least one ChannelMonitor copy. Revocation secret MUST NOT be released and offchain channel
    * update must be rejected.
    *
    * This failure may also signal a failure to update the local persisted copy of one of
    * the channel monitor instance.
    *
    * Note that even when you fail a holder commitment transaction update, you must store the
    * update to ensure you can claim from it in case of a duplicate copy of this ChannelMonitor
    * broadcasts it (e.g distributed channel-monitor deployment)
    *
    * In case of distributed watchtowers deployment, the new version must be written to disk, as
    * state may have been stored but rejected due to a block forcing a commitment broadcast. This
    * storage is used to claim outputs of rejected state confirmed onchain by another watchtower,
    * lagging behind on block processing.
    */
   LDKChannelMonitorUpdateErr_PermanentFailure,
   /**
    * Must be last for serialization purposes
    */
   LDKChannelMonitorUpdateErr_Sentinel,
} LDKChannelMonitorUpdateErr;

/**
 * An enum that represents the speed at which we want a transaction to confirm used for feerate
 * estimation.
 */
typedef enum LDKConfirmationTarget {
   /**
    * We are happy with this transaction confirming slowly when feerate drops some.
    */
   LDKConfirmationTarget_Background,
   /**
    * We'd like this transaction to confirm without major delay, but 12-18 blocks is fine.
    */
   LDKConfirmationTarget_Normal,
   /**
    * We'd like this transaction to confirm in the next few blocks.
    */
   LDKConfirmationTarget_HighPriority,
   /**
    * Must be last for serialization purposes
    */
   LDKConfirmationTarget_Sentinel,
} LDKConfirmationTarget;

/**
 * An enum representing the available verbosity levels of the logger.
 */
typedef enum LDKLevel {
   /**
    *Designates logger being silent
    */
   LDKLevel_Off,
   /**
    * Designates very serious errors
    */
   LDKLevel_Error,
   /**
    * Designates hazardous situations
    */
   LDKLevel_Warn,
   /**
    * Designates useful information
    */
   LDKLevel_Info,
   /**
    * Designates lower priority information
    */
   LDKLevel_Debug,
   /**
    * Designates very low priority, often extremely verbose, information
    */
   LDKLevel_Trace,
   /**
    * Must be last for serialization purposes
    */
   LDKLevel_Sentinel,
} LDKLevel;

typedef enum LDKNetwork {
   LDKNetwork_Bitcoin,
   LDKNetwork_Testnet,
   LDKNetwork_Regtest,
   /**
    * Must be last for serialization purposes
    */
   LDKNetwork_Sentinel,
} LDKNetwork;

typedef enum LDKSecp256k1Error {
   LDKSecp256k1Error_IncorrectSignature,
   LDKSecp256k1Error_InvalidMessage,
   LDKSecp256k1Error_InvalidPublicKey,
   LDKSecp256k1Error_InvalidSignature,
   LDKSecp256k1Error_InvalidSecretKey,
   LDKSecp256k1Error_InvalidRecoveryId,
   LDKSecp256k1Error_InvalidTweak,
   LDKSecp256k1Error_NotEnoughMemory,
   LDKSecp256k1Error_CallbackPanicked,
   /**
    * Must be last for serialization purposes
    */
   LDKSecp256k1Error_Sentinel,
} LDKSecp256k1Error;

/**
 * A serialized transaction, in (pointer, length) form.
 *
 * This type optionally owns its own memory, and thus the semantics around access change based on
 * the data_is_owned flag. If data_is_owned is set, you must call Transaction_free to free the
 * underlying buffer before the object goes out of scope. If data_is_owned is not set, any access
 * to the buffer after the scope in which the object was provided to you is invalid. eg, access
 * after you return from the call in which a !data_is_owned Transaction is provided to you would
 * be invalid.
 *
 * Note that, while it may change in the future, because transactions on the Rust side are stored
 * in a deserialized form, all `Transaction`s generated on the Rust side will have `data_is_owned`
 * set. Similarly, while it may change in the future, all `Transaction`s you pass to Rust may have
 * `data_is_owned` either set or unset at your discretion.
 */
typedef struct LDKTransaction {
   const uint8_t *data;
   uintptr_t datalen;
   bool data_is_owned;
} LDKTransaction;

typedef struct LDKCVecTempl_u8 {
   uint8_t *data;
   uintptr_t datalen;
} LDKCVecTempl_u8;

typedef LDKCVecTempl_u8 LDKCVec_u8Z;

/**
 * A transaction output including a scriptPubKey and value.
 * This type *does* own its own memory, so must be free'd appropriately.
 */
typedef struct LDKTxOut {
   LDKCVec_u8Z script_pubkey;
   uint64_t value;
} LDKTxOut;

typedef struct LDKC2TupleTempl_usize__Transaction {
   uintptr_t a;
   LDKTransaction b;
} LDKC2TupleTempl_usize__Transaction;

typedef LDKC2TupleTempl_usize__Transaction LDKC2Tuple_usizeTransactionZ;

typedef union LDKCResultPtr_u8__ChannelMonitorUpdateErr {
   uint8_t *result;
   LDKChannelMonitorUpdateErr *err;
} LDKCResultPtr_u8__ChannelMonitorUpdateErr;

typedef struct LDKCResultTempl_u8__ChannelMonitorUpdateErr {
   LDKCResultPtr_u8__ChannelMonitorUpdateErr contents;
   bool result_ok;
} LDKCResultTempl_u8__ChannelMonitorUpdateErr;

typedef LDKCResultTempl_u8__ChannelMonitorUpdateErr LDKCResult_NoneChannelMonitorUpdateErrZ;



/**
 * General Err type for ChannelMonitor actions. Generally, this implies that the data provided is
 * inconsistent with the ChannelMonitor being called. eg for ChannelMonitor::update_monitor this
 * means you tried to update a monitor for a different channel or the ChannelMonitorUpdate was
 * corrupted.
 * Contains a human-readable error message.
 */
typedef struct MUST_USE_STRUCT LDKMonitorUpdateError {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeMonitorUpdateError *inner;
   bool is_owned;
} LDKMonitorUpdateError;

typedef union LDKCResultPtr_u8__MonitorUpdateError {
   uint8_t *result;
   LDKMonitorUpdateError *err;
} LDKCResultPtr_u8__MonitorUpdateError;

typedef struct LDKCResultTempl_u8__MonitorUpdateError {
   LDKCResultPtr_u8__MonitorUpdateError contents;
   bool result_ok;
} LDKCResultTempl_u8__MonitorUpdateError;

typedef LDKCResultTempl_u8__MonitorUpdateError LDKCResult_NoneMonitorUpdateErrorZ;



/**
 * A reference to a transaction output.
 *
 * Differs from bitcoin::blockdata::transaction::OutPoint as the index is a u16 instead of u32
 * due to LN's restrictions on index values. Should reduce (possibly) unsafe conversions this way.
 */
typedef struct MUST_USE_STRUCT LDKOutPoint {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeOutPoint *inner;
   bool is_owned;
} LDKOutPoint;

typedef struct LDKC2TupleTempl_OutPoint__CVec_u8Z {
   LDKOutPoint a;
   LDKCVec_u8Z b;
} LDKC2TupleTempl_OutPoint__CVec_u8Z;

typedef LDKC2TupleTempl_OutPoint__CVec_u8Z LDKC2Tuple_OutPointScriptZ;

/**
 * Arbitrary 32 bytes, which could represent one of a few different things. You probably want to
 * look up the corresponding function in rust-lightning's docs.
 */
typedef struct LDKThirtyTwoBytes {
   uint8_t data[32];
} LDKThirtyTwoBytes;

typedef struct LDKCVecTempl_TxOut {
   LDKTxOut *data;
   uintptr_t datalen;
} LDKCVecTempl_TxOut;

typedef struct LDKC2TupleTempl_ThirtyTwoBytes__CVecTempl_TxOut {
   LDKThirtyTwoBytes a;
   LDKCVecTempl_TxOut b;
} LDKC2TupleTempl_ThirtyTwoBytes__CVecTempl_TxOut;

typedef LDKC2TupleTempl_ThirtyTwoBytes__CVecTempl_TxOut LDKC2Tuple_TxidCVec_TxOutZZ;

typedef LDKCVecTempl_TxOut LDKCVec_TxOutZ;

typedef struct LDKC2TupleTempl_u64__u64 {
   uint64_t a;
   uint64_t b;
} LDKC2TupleTempl_u64__u64;

typedef LDKC2TupleTempl_u64__u64 LDKC2Tuple_u64u64Z;

typedef struct LDKSignature {
   uint8_t compact_form[64];
} LDKSignature;

typedef struct LDKCVecTempl_Signature {
   LDKSignature *data;
   uintptr_t datalen;
} LDKCVecTempl_Signature;

typedef struct LDKC2TupleTempl_Signature__CVecTempl_Signature {
   LDKSignature a;
   LDKCVecTempl_Signature b;
} LDKC2TupleTempl_Signature__CVecTempl_Signature;

typedef LDKC2TupleTempl_Signature__CVecTempl_Signature LDKC2Tuple_SignatureCVec_SignatureZZ;

typedef LDKCVecTempl_Signature LDKCVec_SignatureZ;

typedef union LDKCResultPtr_C2TupleTempl_Signature__CVecTempl_Signature________u8 {
   LDKC2TupleTempl_Signature__CVecTempl_Signature *result;
   uint8_t *err;
} LDKCResultPtr_C2TupleTempl_Signature__CVecTempl_Signature________u8;

typedef struct LDKCResultTempl_C2TupleTempl_Signature__CVecTempl_Signature________u8 {
   LDKCResultPtr_C2TupleTempl_Signature__CVecTempl_Signature________u8 contents;
   bool result_ok;
} LDKCResultTempl_C2TupleTempl_Signature__CVecTempl_Signature________u8;

typedef LDKCResultTempl_C2TupleTempl_Signature__CVecTempl_Signature________u8 LDKCResult_C2Tuple_SignatureCVec_SignatureZZNoneZ;

typedef union LDKCResultPtr_Signature__u8 {
   LDKSignature *result;
   uint8_t *err;
} LDKCResultPtr_Signature__u8;

typedef struct LDKCResultTempl_Signature__u8 {
   LDKCResultPtr_Signature__u8 contents;
   bool result_ok;
} LDKCResultTempl_Signature__u8;

typedef LDKCResultTempl_Signature__u8 LDKCResult_SignatureNoneZ;

typedef union LDKCResultPtr_CVecTempl_Signature_____u8 {
   LDKCVecTempl_Signature *result;
   uint8_t *err;
} LDKCResultPtr_CVecTempl_Signature_____u8;

typedef struct LDKCResultTempl_CVecTempl_Signature_____u8 {
   LDKCResultPtr_CVecTempl_Signature_____u8 contents;
   bool result_ok;
} LDKCResultTempl_CVecTempl_Signature_____u8;

typedef LDKCResultTempl_CVecTempl_Signature_____u8 LDKCResult_CVec_SignatureZNoneZ;

/**
 * A Rust str object, ie a reference to a UTF8-valid string.
 * This is *not* null-terminated so cannot be used directly as a C string!
 */
typedef struct LDKStr {
   const uint8_t *chars;
   uintptr_t len;
} LDKStr;

/**
 * Indicates an error on the client's part (usually some variant of attempting to use too-low or
 * too-high values)
 */
typedef enum LDKAPIError_Tag {
   /**
    * Indicates the API was wholly misused (see err for more). Cases where these can be returned
    * are documented, but generally indicates some precondition of a function was violated.
    */
   LDKAPIError_APIMisuseError,
   /**
    * Due to a high feerate, we were unable to complete the request.
    * For example, this may be returned if the feerate implies we cannot open a channel at the
    * requested value, but opening a larger channel would succeed.
    */
   LDKAPIError_FeeRateTooHigh,
   /**
    * A malformed Route was provided (eg overflowed value, node id mismatch, overly-looped route,
    * too-many-hops, etc).
    */
   LDKAPIError_RouteError,
   /**
    * We were unable to complete the request as the Channel required to do so is unable to
    * complete the request (or was not found). This can take many forms, including disconnected
    * peer, channel at capacity, channel shutting down, etc.
    */
   LDKAPIError_ChannelUnavailable,
   /**
    * An attempt to call watch/update_channel returned an Err (ie you did this!), causing the
    * attempted action to fail.
    */
   LDKAPIError_MonitorUpdateFailed,
   /**
    * Must be last for serialization purposes
    */
   LDKAPIError_Sentinel,
} LDKAPIError_Tag;

typedef struct LDKAPIError_LDKAPIMisuseError_Body {
   LDKCVec_u8Z err;
} LDKAPIError_LDKAPIMisuseError_Body;

typedef struct LDKAPIError_LDKFeeRateTooHigh_Body {
   LDKCVec_u8Z err;
   uint32_t feerate;
} LDKAPIError_LDKFeeRateTooHigh_Body;

typedef struct LDKAPIError_LDKRouteError_Body {
   LDKStr err;
} LDKAPIError_LDKRouteError_Body;

typedef struct LDKAPIError_LDKChannelUnavailable_Body {
   LDKCVec_u8Z err;
} LDKAPIError_LDKChannelUnavailable_Body;

typedef struct LDKAPIError {
   LDKAPIError_Tag tag;
   union {
      LDKAPIError_LDKAPIMisuseError_Body api_misuse_error;
      LDKAPIError_LDKFeeRateTooHigh_Body fee_rate_too_high;
      LDKAPIError_LDKRouteError_Body route_error;
      LDKAPIError_LDKChannelUnavailable_Body channel_unavailable;
   };
} LDKAPIError;

typedef union LDKCResultPtr_u8__APIError {
   uint8_t *result;
   LDKAPIError *err;
} LDKCResultPtr_u8__APIError;

typedef struct LDKCResultTempl_u8__APIError {
   LDKCResultPtr_u8__APIError contents;
   bool result_ok;
} LDKCResultTempl_u8__APIError;

typedef LDKCResultTempl_u8__APIError LDKCResult_NoneAPIErrorZ;



/**
 * If a payment fails to send, it can be in one of several states. This enum is returned as the
 * Err() type describing which state the payment is in, see the description of individual enum
 * states for more.
 */
typedef struct MUST_USE_STRUCT LDKPaymentSendFailure {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativePaymentSendFailure *inner;
   bool is_owned;
} LDKPaymentSendFailure;

typedef union LDKCResultPtr_u8__PaymentSendFailure {
   uint8_t *result;
   LDKPaymentSendFailure *err;
} LDKCResultPtr_u8__PaymentSendFailure;

typedef struct LDKCResultTempl_u8__PaymentSendFailure {
   LDKCResultPtr_u8__PaymentSendFailure contents;
   bool result_ok;
} LDKCResultTempl_u8__PaymentSendFailure;

typedef LDKCResultTempl_u8__PaymentSendFailure LDKCResult_NonePaymentSendFailureZ;



/**
 * A channel_announcement message to be sent or received from a peer
 */
typedef struct MUST_USE_STRUCT LDKChannelAnnouncement {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeChannelAnnouncement *inner;
   bool is_owned;
} LDKChannelAnnouncement;



/**
 * A channel_update message to be sent or received from a peer
 */
typedef struct MUST_USE_STRUCT LDKChannelUpdate {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeChannelUpdate *inner;
   bool is_owned;
} LDKChannelUpdate;

typedef struct LDKC3TupleTempl_ChannelAnnouncement__ChannelUpdate__ChannelUpdate {
   LDKChannelAnnouncement a;
   LDKChannelUpdate b;
   LDKChannelUpdate c;
} LDKC3TupleTempl_ChannelAnnouncement__ChannelUpdate__ChannelUpdate;

typedef LDKC3TupleTempl_ChannelAnnouncement__ChannelUpdate__ChannelUpdate LDKC3Tuple_ChannelAnnouncementChannelUpdateChannelUpdateZ;



/**
 * Error for PeerManager errors. If you get one of these, you must disconnect the socket and
 * generate no further read_event/write_buffer_space_avail calls for the descriptor, only
 * triggering a single socket_disconnected call (unless it was provided in response to a
 * new_*_connection event, in which case no such socket_disconnected() must be called and the
 * socket silently disconencted).
 */
typedef struct MUST_USE_STRUCT LDKPeerHandleError {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativePeerHandleError *inner;
   bool is_owned;
} LDKPeerHandleError;

typedef union LDKCResultPtr_u8__PeerHandleError {
   uint8_t *result;
   LDKPeerHandleError *err;
} LDKCResultPtr_u8__PeerHandleError;

typedef struct LDKCResultTempl_u8__PeerHandleError {
   LDKCResultPtr_u8__PeerHandleError contents;
   bool result_ok;
} LDKCResultTempl_u8__PeerHandleError;

typedef LDKCResultTempl_u8__PeerHandleError LDKCResult_NonePeerHandleErrorZ;



/**
 * Information about an HTLC as it appears in a commitment transaction
 */
typedef struct MUST_USE_STRUCT LDKHTLCOutputInCommitment {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeHTLCOutputInCommitment *inner;
   bool is_owned;
} LDKHTLCOutputInCommitment;

typedef struct LDKC2TupleTempl_HTLCOutputInCommitment__Signature {
   LDKHTLCOutputInCommitment a;
   LDKSignature b;
} LDKC2TupleTempl_HTLCOutputInCommitment__Signature;

typedef LDKC2TupleTempl_HTLCOutputInCommitment__Signature LDKC2Tuple_HTLCOutputInCommitmentSignatureZ;

typedef struct LDKPublicKey {
   uint8_t compressed_form[33];
} LDKPublicKey;

/**
 * When on-chain outputs are created by rust-lightning (which our counterparty is not able to
 * claim at any point in the future) an event is generated which you must track and be able to
 * spend on-chain. The information needed to do this is provided in this enum, including the
 * outpoint describing which txid and output index is available, the full output which exists at
 * that txid/index, and any keys or other information required to sign.
 */
typedef enum LDKSpendableOutputDescriptor_Tag {
   /**
    * An output to a script which was provided via KeysInterface, thus you should already know
    * how to spend it. No keys are provided as rust-lightning was never given any keys - only the
    * script_pubkey as it appears in the output.
    * These may include outputs from a transaction punishing our counterparty or claiming an HTLC
    * on-chain using the payment preimage or after it has timed out.
    */
   LDKSpendableOutputDescriptor_StaticOutput,
   /**
    * An output to a P2WSH script which can be spent with a single signature after a CSV delay.
    *
    * The witness in the spending input should be:
    * <BIP 143 signature> <empty vector> (MINIMALIF standard rule) <provided witnessScript>
    *
    * Note that the nSequence field in the spending input must be set to to_self_delay
    * (which means the transaction is not broadcastable until at least to_self_delay
    * blocks after the outpoint confirms).
    *
    * These are generally the result of a \"revocable\" output to us, spendable only by us unless
    * it is an output from an old state which we broadcast (which should never happen).
    *
    * To derive the delayed_payment key which is used to sign for this input, you must pass the
    * holder delayed_payment_base_key (ie the private key which corresponds to the pubkey in
    * ChannelKeys::pubkeys().delayed_payment_basepoint) and the provided per_commitment_point to
    * chan_utils::derive_private_key. The public key can be generated without the secret key
    * using chan_utils::derive_public_key and only the delayed_payment_basepoint which appears in
    * ChannelKeys::pubkeys().
    *
    * To derive the revocation_pubkey provided here (which is used in the witness
    * script generation), you must pass the counterparty revocation_basepoint (which appears in the
    * call to ChannelKeys::on_accept) and the provided per_commitment point
    * to chan_utils::derive_public_revocation_key.
    *
    * The witness script which is hashed and included in the output script_pubkey may be
    * regenerated by passing the revocation_pubkey (derived as above), our delayed_payment pubkey
    * (derived as above), and the to_self_delay contained here to
    * chan_utils::get_revokeable_redeemscript.
    */
   LDKSpendableOutputDescriptor_DynamicOutputP2WSH,
   /**
    * An output to a P2WPKH, spendable exclusively by our payment key (ie the private key which
    * corresponds to the public key in ChannelKeys::pubkeys().payment_point).
    * The witness in the spending input, is, thus, simply:
    * <BIP 143 signature> <payment key>
    *
    * These are generally the result of our counterparty having broadcast the current state,
    * allowing us to claim the non-HTLC-encumbered outputs immediately.
    */
   LDKSpendableOutputDescriptor_StaticOutputCounterpartyPayment,
   /**
    * Must be last for serialization purposes
    */
   LDKSpendableOutputDescriptor_Sentinel,
} LDKSpendableOutputDescriptor_Tag;

typedef struct LDKSpendableOutputDescriptor_LDKStaticOutput_Body {
   LDKOutPoint outpoint;
   LDKTxOut output;
} LDKSpendableOutputDescriptor_LDKStaticOutput_Body;

typedef struct LDKSpendableOutputDescriptor_LDKDynamicOutputP2WSH_Body {
   LDKOutPoint outpoint;
   LDKPublicKey per_commitment_point;
   uint16_t to_self_delay;
   LDKTxOut output;
   LDKC2Tuple_u64u64Z key_derivation_params;
   LDKPublicKey revocation_pubkey;
} LDKSpendableOutputDescriptor_LDKDynamicOutputP2WSH_Body;

typedef struct LDKSpendableOutputDescriptor_LDKStaticOutputCounterpartyPayment_Body {
   LDKOutPoint outpoint;
   LDKTxOut output;
   LDKC2Tuple_u64u64Z key_derivation_params;
} LDKSpendableOutputDescriptor_LDKStaticOutputCounterpartyPayment_Body;

typedef struct LDKSpendableOutputDescriptor {
   LDKSpendableOutputDescriptor_Tag tag;
   union {
      LDKSpendableOutputDescriptor_LDKStaticOutput_Body static_output;
      LDKSpendableOutputDescriptor_LDKDynamicOutputP2WSH_Body dynamic_output_p2wsh;
      LDKSpendableOutputDescriptor_LDKStaticOutputCounterpartyPayment_Body static_output_counterparty_payment;
   };
} LDKSpendableOutputDescriptor;

typedef struct LDKCVecTempl_SpendableOutputDescriptor {
   LDKSpendableOutputDescriptor *data;
   uintptr_t datalen;
} LDKCVecTempl_SpendableOutputDescriptor;

typedef LDKCVecTempl_SpendableOutputDescriptor LDKCVec_SpendableOutputDescriptorZ;

/**
 * An Event which you should probably take some action in response to.
 *
 * Note that while Writeable and Readable are implemented for Event, you probably shouldn't use
 * them directly as they don't round-trip exactly (for example FundingGenerationReady is never
 * written as it makes no sense to respond to it after reconnecting to peers).
 */
typedef enum LDKEvent_Tag {
   /**
    * Used to indicate that the client should generate a funding transaction with the given
    * parameters and then call ChannelManager::funding_transaction_generated.
    * Generated in ChannelManager message handling.
    * Note that *all inputs* in the funding transaction must spend SegWit outputs or your
    * counterparty can steal your funds!
    */
   LDKEvent_FundingGenerationReady,
   /**
    * Used to indicate that the client may now broadcast the funding transaction it created for a
    * channel. Broadcasting such a transaction prior to this event may lead to our counterparty
    * trivially stealing all funds in the funding transaction!
    */
   LDKEvent_FundingBroadcastSafe,
   /**
    * Indicates we've received money! Just gotta dig out that payment preimage and feed it to
    * ChannelManager::claim_funds to get it....
    * Note that if the preimage is not known or the amount paid is incorrect, you should call
    * ChannelManager::fail_htlc_backwards to free up resources for this HTLC and avoid
    * network congestion.
    * The amount paid should be considered 'incorrect' when it is less than or more than twice
    * the amount expected.
    * If you fail to call either ChannelManager::claim_funds or
    * ChannelManager::fail_htlc_backwards within the HTLC's timeout, the HTLC will be
    * automatically failed.
    */
   LDKEvent_PaymentReceived,
   /**
    * Indicates an outbound payment we made succeeded (ie it made it all the way to its target
    * and we got back the payment preimage for it).
    * Note that duplicative PaymentSent Events may be generated - it is your responsibility to
    * deduplicate them by payment_preimage (which MUST be unique)!
    */
   LDKEvent_PaymentSent,
   /**
    * Indicates an outbound payment we made failed. Probably some intermediary node dropped
    * something. You may wish to retry with a different route.
    * Note that duplicative PaymentFailed Events may be generated - it is your responsibility to
    * deduplicate them by payment_hash (which MUST be unique)!
    */
   LDKEvent_PaymentFailed,
   /**
    * Used to indicate that ChannelManager::process_pending_htlc_forwards should be called at a
    * time in the future.
    */
   LDKEvent_PendingHTLCsForwardable,
   /**
    * Used to indicate that an output was generated on-chain which you should know how to spend.
    * Such an output will *not* ever be spent by rust-lightning, and are not at risk of your
    * counterparty spending them due to some kind of timeout. Thus, you need to store them
    * somewhere and spend them when you create on-chain transactions.
    */
   LDKEvent_SpendableOutputs,
   /**
    * Must be last for serialization purposes
    */
   LDKEvent_Sentinel,
} LDKEvent_Tag;

typedef struct LDKEvent_LDKFundingGenerationReady_Body {
   LDKThirtyTwoBytes temporary_channel_id;
   uint64_t channel_value_satoshis;
   LDKCVec_u8Z output_script;
   uint64_t user_channel_id;
} LDKEvent_LDKFundingGenerationReady_Body;

typedef struct LDKEvent_LDKFundingBroadcastSafe_Body {
   LDKOutPoint funding_txo;
   uint64_t user_channel_id;
} LDKEvent_LDKFundingBroadcastSafe_Body;

typedef struct LDKEvent_LDKPaymentReceived_Body {
   LDKThirtyTwoBytes payment_hash;
   LDKThirtyTwoBytes payment_secret;
   uint64_t amt;
} LDKEvent_LDKPaymentReceived_Body;

typedef struct LDKEvent_LDKPaymentSent_Body {
   LDKThirtyTwoBytes payment_preimage;
} LDKEvent_LDKPaymentSent_Body;

typedef struct LDKEvent_LDKPaymentFailed_Body {
   LDKThirtyTwoBytes payment_hash;
   bool rejected_by_dest;
} LDKEvent_LDKPaymentFailed_Body;

typedef struct LDKEvent_LDKPendingHTLCsForwardable_Body {
   uint64_t time_forwardable;
} LDKEvent_LDKPendingHTLCsForwardable_Body;

typedef struct LDKEvent_LDKSpendableOutputs_Body {
   LDKCVec_SpendableOutputDescriptorZ outputs;
} LDKEvent_LDKSpendableOutputs_Body;

typedef struct LDKEvent {
   LDKEvent_Tag tag;
   union {
      LDKEvent_LDKFundingGenerationReady_Body funding_generation_ready;
      LDKEvent_LDKFundingBroadcastSafe_Body funding_broadcast_safe;
      LDKEvent_LDKPaymentReceived_Body payment_received;
      LDKEvent_LDKPaymentSent_Body payment_sent;
      LDKEvent_LDKPaymentFailed_Body payment_failed;
      LDKEvent_LDKPendingHTLCsForwardable_Body pending_htl_cs_forwardable;
      LDKEvent_LDKSpendableOutputs_Body spendable_outputs;
   };
} LDKEvent;



/**
 * An accept_channel message to be sent or received from a peer
 */
typedef struct MUST_USE_STRUCT LDKAcceptChannel {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeAcceptChannel *inner;
   bool is_owned;
} LDKAcceptChannel;



/**
 * An open_channel message to be sent or received from a peer
 */
typedef struct MUST_USE_STRUCT LDKOpenChannel {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeOpenChannel *inner;
   bool is_owned;
} LDKOpenChannel;



/**
 * A funding_created message to be sent or received from a peer
 */
typedef struct MUST_USE_STRUCT LDKFundingCreated {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeFundingCreated *inner;
   bool is_owned;
} LDKFundingCreated;



/**
 * A funding_signed message to be sent or received from a peer
 */
typedef struct MUST_USE_STRUCT LDKFundingSigned {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeFundingSigned *inner;
   bool is_owned;
} LDKFundingSigned;



/**
 * A funding_locked message to be sent or received from a peer
 */
typedef struct MUST_USE_STRUCT LDKFundingLocked {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeFundingLocked *inner;
   bool is_owned;
} LDKFundingLocked;



/**
 * An announcement_signatures message to be sent or received from a peer
 */
typedef struct MUST_USE_STRUCT LDKAnnouncementSignatures {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeAnnouncementSignatures *inner;
   bool is_owned;
} LDKAnnouncementSignatures;



/**
 * Struct used to return values from revoke_and_ack messages, containing a bunch of commitment
 * transaction updates if they were pending.
 */
typedef struct MUST_USE_STRUCT LDKCommitmentUpdate {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeCommitmentUpdate *inner;
   bool is_owned;
} LDKCommitmentUpdate;



/**
 * A revoke_and_ack message to be sent or received from a peer
 */
typedef struct MUST_USE_STRUCT LDKRevokeAndACK {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeRevokeAndACK *inner;
   bool is_owned;
} LDKRevokeAndACK;



/**
 * A closing_signed message to be sent or received from a peer
 */
typedef struct MUST_USE_STRUCT LDKClosingSigned {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeClosingSigned *inner;
   bool is_owned;
} LDKClosingSigned;



/**
 * A shutdown message to be sent or received from a peer
 */
typedef struct MUST_USE_STRUCT LDKShutdown {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeShutdown *inner;
   bool is_owned;
} LDKShutdown;



/**
 * A channel_reestablish message to be sent or received from a peer
 */
typedef struct MUST_USE_STRUCT LDKChannelReestablish {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeChannelReestablish *inner;
   bool is_owned;
} LDKChannelReestablish;



/**
 * A node_announcement message to be sent or received from a peer
 */
typedef struct MUST_USE_STRUCT LDKNodeAnnouncement {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeNodeAnnouncement *inner;
   bool is_owned;
} LDKNodeAnnouncement;



/**
 * An error message to be sent or received from a peer
 */
typedef struct MUST_USE_STRUCT LDKErrorMessage {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeErrorMessage *inner;
   bool is_owned;
} LDKErrorMessage;

/**
 * Used to put an error message in a LightningError
 */
typedef enum LDKErrorAction_Tag {
   /**
    * The peer took some action which made us think they were useless. Disconnect them.
    */
   LDKErrorAction_DisconnectPeer,
   /**
    * The peer did something harmless that we weren't able to process, just log and ignore
    */
   LDKErrorAction_IgnoreError,
   /**
    * The peer did something incorrect. Tell them.
    */
   LDKErrorAction_SendErrorMessage,
   /**
    * Must be last for serialization purposes
    */
   LDKErrorAction_Sentinel,
} LDKErrorAction_Tag;

typedef struct LDKErrorAction_LDKDisconnectPeer_Body {
   LDKErrorMessage msg;
} LDKErrorAction_LDKDisconnectPeer_Body;

typedef struct LDKErrorAction_LDKSendErrorMessage_Body {
   LDKErrorMessage msg;
} LDKErrorAction_LDKSendErrorMessage_Body;

typedef struct LDKErrorAction {
   LDKErrorAction_Tag tag;
   union {
      LDKErrorAction_LDKDisconnectPeer_Body disconnect_peer;
      LDKErrorAction_LDKSendErrorMessage_Body send_error_message;
   };
} LDKErrorAction;

/**
 * The information we received from a peer along the route of a payment we originated. This is
 * returned by ChannelMessageHandler::handle_update_fail_htlc to be passed into
 * RoutingMessageHandler::handle_htlc_fail_channel_update to update our network map.
 */
typedef enum LDKHTLCFailChannelUpdate_Tag {
   /**
    * We received an error which included a full ChannelUpdate message.
    */
   LDKHTLCFailChannelUpdate_ChannelUpdateMessage,
   /**
    * We received an error which indicated only that a channel has been closed
    */
   LDKHTLCFailChannelUpdate_ChannelClosed,
   /**
    * We received an error which indicated only that a node has failed
    */
   LDKHTLCFailChannelUpdate_NodeFailure,
   /**
    * Must be last for serialization purposes
    */
   LDKHTLCFailChannelUpdate_Sentinel,
} LDKHTLCFailChannelUpdate_Tag;

typedef struct LDKHTLCFailChannelUpdate_LDKChannelUpdateMessage_Body {
   LDKChannelUpdate msg;
} LDKHTLCFailChannelUpdate_LDKChannelUpdateMessage_Body;

typedef struct LDKHTLCFailChannelUpdate_LDKChannelClosed_Body {
   uint64_t short_channel_id;
   bool is_permanent;
} LDKHTLCFailChannelUpdate_LDKChannelClosed_Body;

typedef struct LDKHTLCFailChannelUpdate_LDKNodeFailure_Body {
   LDKPublicKey node_id;
   bool is_permanent;
} LDKHTLCFailChannelUpdate_LDKNodeFailure_Body;

typedef struct LDKHTLCFailChannelUpdate {
   LDKHTLCFailChannelUpdate_Tag tag;
   union {
      LDKHTLCFailChannelUpdate_LDKChannelUpdateMessage_Body channel_update_message;
      LDKHTLCFailChannelUpdate_LDKChannelClosed_Body channel_closed;
      LDKHTLCFailChannelUpdate_LDKNodeFailure_Body node_failure;
   };
} LDKHTLCFailChannelUpdate;

/**
 * An event generated by ChannelManager which indicates a message should be sent to a peer (or
 * broadcast to most peers).
 * These events are handled by PeerManager::process_events if you are using a PeerManager.
 */
typedef enum LDKMessageSendEvent_Tag {
   /**
    * Used to indicate that we've accepted a channel open and should send the accept_channel
    * message provided to the given peer.
    */
   LDKMessageSendEvent_SendAcceptChannel,
   /**
    * Used to indicate that we've initiated a channel open and should send the open_channel
    * message provided to the given peer.
    */
   LDKMessageSendEvent_SendOpenChannel,
   /**
    * Used to indicate that a funding_created message should be sent to the peer with the given node_id.
    */
   LDKMessageSendEvent_SendFundingCreated,
   /**
    * Used to indicate that a funding_signed message should be sent to the peer with the given node_id.
    */
   LDKMessageSendEvent_SendFundingSigned,
   /**
    * Used to indicate that a funding_locked message should be sent to the peer with the given node_id.
    */
   LDKMessageSendEvent_SendFundingLocked,
   /**
    * Used to indicate that an announcement_signatures message should be sent to the peer with the given node_id.
    */
   LDKMessageSendEvent_SendAnnouncementSignatures,
   /**
    * Used to indicate that a series of HTLC update messages, as well as a commitment_signed
    * message should be sent to the peer with the given node_id.
    */
   LDKMessageSendEvent_UpdateHTLCs,
   /**
    * Used to indicate that a revoke_and_ack message should be sent to the peer with the given node_id.
    */
   LDKMessageSendEvent_SendRevokeAndACK,
   /**
    * Used to indicate that a closing_signed message should be sent to the peer with the given node_id.
    */
   LDKMessageSendEvent_SendClosingSigned,
   /**
    * Used to indicate that a shutdown message should be sent to the peer with the given node_id.
    */
   LDKMessageSendEvent_SendShutdown,
   /**
    * Used to indicate that a channel_reestablish message should be sent to the peer with the given node_id.
    */
   LDKMessageSendEvent_SendChannelReestablish,
   /**
    * Used to indicate that a channel_announcement and channel_update should be broadcast to all
    * peers (except the peer with node_id either msg.contents.node_id_1 or msg.contents.node_id_2).
    *
    * Note that after doing so, you very likely (unless you did so very recently) want to call
    * ChannelManager::broadcast_node_announcement to trigger a BroadcastNodeAnnouncement event.
    * This ensures that any nodes which see our channel_announcement also have a relevant
    * node_announcement, including relevant feature flags which may be important for routing
    * through or to us.
    */
   LDKMessageSendEvent_BroadcastChannelAnnouncement,
   /**
    * Used to indicate that a node_announcement should be broadcast to all peers.
    */
   LDKMessageSendEvent_BroadcastNodeAnnouncement,
   /**
    * Used to indicate that a channel_update should be broadcast to all peers.
    */
   LDKMessageSendEvent_BroadcastChannelUpdate,
   /**
    * Broadcast an error downstream to be handled
    */
   LDKMessageSendEvent_HandleError,
   /**
    * When a payment fails we may receive updates back from the hop where it failed. In such
    * cases this event is generated so that we can inform the network graph of this information.
    */
   LDKMessageSendEvent_PaymentFailureNetworkUpdate,
   /**
    * Must be last for serialization purposes
    */
   LDKMessageSendEvent_Sentinel,
} LDKMessageSendEvent_Tag;

typedef struct LDKMessageSendEvent_LDKSendAcceptChannel_Body {
   LDKPublicKey node_id;
   LDKAcceptChannel msg;
} LDKMessageSendEvent_LDKSendAcceptChannel_Body;

typedef struct LDKMessageSendEvent_LDKSendOpenChannel_Body {
   LDKPublicKey node_id;
   LDKOpenChannel msg;
} LDKMessageSendEvent_LDKSendOpenChannel_Body;

typedef struct LDKMessageSendEvent_LDKSendFundingCreated_Body {
   LDKPublicKey node_id;
   LDKFundingCreated msg;
} LDKMessageSendEvent_LDKSendFundingCreated_Body;

typedef struct LDKMessageSendEvent_LDKSendFundingSigned_Body {
   LDKPublicKey node_id;
   LDKFundingSigned msg;
} LDKMessageSendEvent_LDKSendFundingSigned_Body;

typedef struct LDKMessageSendEvent_LDKSendFundingLocked_Body {
   LDKPublicKey node_id;
   LDKFundingLocked msg;
} LDKMessageSendEvent_LDKSendFundingLocked_Body;

typedef struct LDKMessageSendEvent_LDKSendAnnouncementSignatures_Body {
   LDKPublicKey node_id;
   LDKAnnouncementSignatures msg;
} LDKMessageSendEvent_LDKSendAnnouncementSignatures_Body;

typedef struct LDKMessageSendEvent_LDKUpdateHTLCs_Body {
   LDKPublicKey node_id;
   LDKCommitmentUpdate updates;
} LDKMessageSendEvent_LDKUpdateHTLCs_Body;

typedef struct LDKMessageSendEvent_LDKSendRevokeAndACK_Body {
   LDKPublicKey node_id;
   LDKRevokeAndACK msg;
} LDKMessageSendEvent_LDKSendRevokeAndACK_Body;

typedef struct LDKMessageSendEvent_LDKSendClosingSigned_Body {
   LDKPublicKey node_id;
   LDKClosingSigned msg;
} LDKMessageSendEvent_LDKSendClosingSigned_Body;

typedef struct LDKMessageSendEvent_LDKSendShutdown_Body {
   LDKPublicKey node_id;
   LDKShutdown msg;
} LDKMessageSendEvent_LDKSendShutdown_Body;

typedef struct LDKMessageSendEvent_LDKSendChannelReestablish_Body {
   LDKPublicKey node_id;
   LDKChannelReestablish msg;
} LDKMessageSendEvent_LDKSendChannelReestablish_Body;

typedef struct LDKMessageSendEvent_LDKBroadcastChannelAnnouncement_Body {
   LDKChannelAnnouncement msg;
   LDKChannelUpdate update_msg;
} LDKMessageSendEvent_LDKBroadcastChannelAnnouncement_Body;

typedef struct LDKMessageSendEvent_LDKBroadcastNodeAnnouncement_Body {
   LDKNodeAnnouncement msg;
} LDKMessageSendEvent_LDKBroadcastNodeAnnouncement_Body;

typedef struct LDKMessageSendEvent_LDKBroadcastChannelUpdate_Body {
   LDKChannelUpdate msg;
} LDKMessageSendEvent_LDKBroadcastChannelUpdate_Body;

typedef struct LDKMessageSendEvent_LDKHandleError_Body {
   LDKPublicKey node_id;
   LDKErrorAction action;
} LDKMessageSendEvent_LDKHandleError_Body;

typedef struct LDKMessageSendEvent_LDKPaymentFailureNetworkUpdate_Body {
   LDKHTLCFailChannelUpdate update;
} LDKMessageSendEvent_LDKPaymentFailureNetworkUpdate_Body;

typedef struct LDKMessageSendEvent {
   LDKMessageSendEvent_Tag tag;
   union {
      LDKMessageSendEvent_LDKSendAcceptChannel_Body send_accept_channel;
      LDKMessageSendEvent_LDKSendOpenChannel_Body send_open_channel;
      LDKMessageSendEvent_LDKSendFundingCreated_Body send_funding_created;
      LDKMessageSendEvent_LDKSendFundingSigned_Body send_funding_signed;
      LDKMessageSendEvent_LDKSendFundingLocked_Body send_funding_locked;
      LDKMessageSendEvent_LDKSendAnnouncementSignatures_Body send_announcement_signatures;
      LDKMessageSendEvent_LDKUpdateHTLCs_Body update_htl_cs;
      LDKMessageSendEvent_LDKSendRevokeAndACK_Body send_revoke_and_ack;
      LDKMessageSendEvent_LDKSendClosingSigned_Body send_closing_signed;
      LDKMessageSendEvent_LDKSendShutdown_Body send_shutdown;
      LDKMessageSendEvent_LDKSendChannelReestablish_Body send_channel_reestablish;
      LDKMessageSendEvent_LDKBroadcastChannelAnnouncement_Body broadcast_channel_announcement;
      LDKMessageSendEvent_LDKBroadcastNodeAnnouncement_Body broadcast_node_announcement;
      LDKMessageSendEvent_LDKBroadcastChannelUpdate_Body broadcast_channel_update;
      LDKMessageSendEvent_LDKHandleError_Body handle_error;
      LDKMessageSendEvent_LDKPaymentFailureNetworkUpdate_Body payment_failure_network_update;
   };
} LDKMessageSendEvent;

typedef struct LDKCVecTempl_MessageSendEvent {
   LDKMessageSendEvent *data;
   uintptr_t datalen;
} LDKCVecTempl_MessageSendEvent;

typedef LDKCVecTempl_MessageSendEvent LDKCVec_MessageSendEventZ;

/**
 * A trait indicating an object may generate message send events
 */
typedef struct LDKMessageSendEventsProvider {
   void *this_arg;
   /**
    * Gets the list of pending events which were generated by previous actions, clearing the list
    * in the process.
    */
   LDKCVec_MessageSendEventZ (*get_and_clear_pending_msg_events)(const void *this_arg);
   void (*free)(void *this_arg);
} LDKMessageSendEventsProvider;

typedef struct LDKCVecTempl_Event {
   LDKEvent *data;
   uintptr_t datalen;
} LDKCVecTempl_Event;

typedef LDKCVecTempl_Event LDKCVec_EventZ;

/**
 * A trait indicating an object may generate events
 */
typedef struct LDKEventsProvider {
   void *this_arg;
   /**
    * Gets the list of pending events which were generated by previous actions, clearing the list
    * in the process.
    */
   LDKCVec_EventZ (*get_and_clear_pending_events)(const void *this_arg);
   void (*free)(void *this_arg);
} LDKEventsProvider;

/**
 * A trait encapsulating the operations required of a logger
 */
typedef struct LDKLogger {
   void *this_arg;
   /**
    * Logs the `Record`
    */
   void (*log)(const void *this_arg, const char *record);
   void (*free)(void *this_arg);
} LDKLogger;



/**
 * Configuration we set when applicable.
 *
 * Default::default() provides sane defaults.
 */
typedef struct MUST_USE_STRUCT LDKChannelHandshakeConfig {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeChannelHandshakeConfig *inner;
   bool is_owned;
} LDKChannelHandshakeConfig;



/**
 * Optional channel limits which are applied during channel creation.
 *
 * These limits are only applied to our counterparty's limits, not our own.
 *
 * Use 0/<type>::max_value() as appropriate to skip checking.
 *
 * Provides sane defaults for most configurations.
 *
 * Most additional limits are disabled except those with which specify a default in individual
 * field documentation. Note that this may result in barely-usable channels, but since they
 * are applied mostly only to incoming channels that's not much of a problem.
 */
typedef struct MUST_USE_STRUCT LDKChannelHandshakeLimits {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeChannelHandshakeLimits *inner;
   bool is_owned;
} LDKChannelHandshakeLimits;



/**
 * Options which apply on a per-channel basis and may change at runtime or based on negotiation
 * with our counterparty.
 */
typedef struct MUST_USE_STRUCT LDKChannelConfig {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeChannelConfig *inner;
   bool is_owned;
} LDKChannelConfig;

typedef struct LDKu8slice {
   const uint8_t *data;
   uintptr_t datalen;
} LDKu8slice;



/**
 * Top-level config which holds ChannelHandshakeLimits and ChannelConfig.
 *
 * Default::default() provides sane defaults for most configurations
 * (but currently with 0 relay fees!)
 */
typedef struct MUST_USE_STRUCT LDKUserConfig {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeUserConfig *inner;
   bool is_owned;
} LDKUserConfig;

typedef union LDKCResultPtr_TxOut__AccessError {
   LDKTxOut *result;
   LDKAccessError *err;
} LDKCResultPtr_TxOut__AccessError;

typedef struct LDKCResultTempl_TxOut__AccessError {
   LDKCResultPtr_TxOut__AccessError contents;
   bool result_ok;
} LDKCResultTempl_TxOut__AccessError;

typedef LDKCResultTempl_TxOut__AccessError LDKCResult_TxOutAccessErrorZ;

/**
 * The `Access` trait defines behavior for accessing chain data and state, such as blocks and
 * UTXOs.
 */
typedef struct LDKAccess {
   void *this_arg;
   /**
    * Returns the transaction output of a funding transaction encoded by [`short_channel_id`].
    * Returns an error if `genesis_hash` is for a different chain or if such a transaction output
    * is unknown.
    *
    * [`short_channel_id`]: https://github.com/lightningnetwork/lightning-rfc/blob/master/07-routing-gossip.md#definition-of-short_channel_id
    */
   LDKCResult_TxOutAccessErrorZ (*get_utxo)(const void *this_arg, const uint8_t (*genesis_hash)[32], uint64_t short_channel_id);
   void (*free)(void *this_arg);
} LDKAccess;



/**
 * One counterparty's public keys which do not change over the life of a channel.
 */
typedef struct MUST_USE_STRUCT LDKChannelPublicKeys {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeChannelPublicKeys *inner;
   bool is_owned;
} LDKChannelPublicKeys;



/**
 * The per-commitment point and a set of pre-calculated public keys used for transaction creation
 * in the signer.
 * The pre-calculated keys are an optimization, because ChannelKeys has enough
 * information to re-derive them.
 */
typedef struct MUST_USE_STRUCT LDKPreCalculatedTxCreationKeys {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativePreCalculatedTxCreationKeys *inner;
   bool is_owned;
} LDKPreCalculatedTxCreationKeys;

typedef struct LDKCVecTempl_HTLCOutputInCommitment {
   LDKHTLCOutputInCommitment *data;
   uintptr_t datalen;
} LDKCVecTempl_HTLCOutputInCommitment;

typedef LDKCVecTempl_HTLCOutputInCommitment LDKCVec_HTLCOutputInCommitmentZ;



/**
 * We use this to track holder commitment transactions and put off signing them until we are ready
 * to broadcast. This class can be used inside a signer implementation to generate a signature
 * given the relevant secret key.
 */
typedef struct MUST_USE_STRUCT LDKHolderCommitmentTransaction {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeHolderCommitmentTransaction *inner;
   bool is_owned;
} LDKHolderCommitmentTransaction;



/**
 * The unsigned part of a channel_announcement
 */
typedef struct MUST_USE_STRUCT LDKUnsignedChannelAnnouncement {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeUnsignedChannelAnnouncement *inner;
   bool is_owned;
} LDKUnsignedChannelAnnouncement;

/**
 * Set of lightning keys needed to operate a channel as described in BOLT 3.
 *
 * Signing services could be implemented on a hardware wallet. In this case,
 * the current ChannelKeys would be a front-end on top of a communication
 * channel connected to your secure device and lightning key material wouldn't
 * reside on a hot server. Nevertheless, a this deployment would still need
 * to trust the ChannelManager to avoid loss of funds as this latest component
 * could ask to sign commitment transaction with HTLCs paying to attacker pubkeys.
 *
 * A more secure iteration would be to use hashlock (or payment points) to pair
 * invoice/incoming HTLCs with outgoing HTLCs to implement a no-trust-ChannelManager
 * at the price of more state and computation on the hardware wallet side. In the future,
 * we are looking forward to design such interface.
 *
 * In any case, ChannelMonitor or fallback watchtowers are always going to be trusted
 * to act, as liveness and breach reply correctness are always going to be hard requirements
 * of LN security model, orthogonal of key management issues.
 *
 * If you're implementing a custom signer, you almost certainly want to implement
 * Readable/Writable to serialize out a unique reference to this set of keys so
 * that you can serialize the full ChannelManager object.
 *
 */
typedef struct LDKChannelKeys {
   void *this_arg;
   /**
    * Gets the per-commitment point for a specific commitment number
    *
    * Note that the commitment number starts at (1 << 48) - 1 and counts backwards.
    */
   LDKPublicKey (*get_per_commitment_point)(const void *this_arg, uint64_t idx);
   /**
    * Gets the commitment secret for a specific commitment number as part of the revocation process
    *
    * An external signer implementation should error here if the commitment was already signed
    * and should refuse to sign it in the future.
    *
    * May be called more than once for the same index.
    *
    * Note that the commitment number starts at (1 << 48) - 1 and counts backwards.
    * TODO: return a Result so we can signal a validation error
    */
   LDKThirtyTwoBytes (*release_commitment_secret)(const void *this_arg, uint64_t idx);
   /**
    * Gets the holder's channel public keys and basepoints
    */
   LDKChannelPublicKeys pubkeys;
   /**
    * Fill in the pubkeys field as a reference to it will be given to Rust after this returns
    * Note that this takes a pointer to this object, not the this_ptr like other methods do
    * This function pointer may be NULL if pubkeys is filled in when this object is created and never needs updating.
    */
   void (*set_pubkeys)(const LDKChannelKeys*);
   /**
    * Gets arbitrary identifiers describing the set of keys which are provided back to you in
    * some SpendableOutputDescriptor types. These should be sufficient to identify this
    * ChannelKeys object uniquely and lookup or re-derive its keys.
    */
   LDKC2Tuple_u64u64Z (*key_derivation_params)(const void *this_arg);
   /**
    * Create a signature for a counterparty's commitment transaction and associated HTLC transactions.
    *
    * Note that if signing fails or is rejected, the channel will be force-closed.
    */
   LDKCResult_C2Tuple_SignatureCVec_SignatureZZNoneZ (*sign_counterparty_commitment)(const void *this_arg, uint32_t feerate_per_kw, LDKTransaction commitment_tx, const LDKPreCalculatedTxCreationKeys *keys, LDKCVec_HTLCOutputInCommitmentZ htlcs);
   /**
    * Create a signature for a holder's commitment transaction. This will only ever be called with
    * the same holder_commitment_tx (or a copy thereof), though there are currently no guarantees
    * that it will not be called multiple times.
    * An external signer implementation should check that the commitment has not been revoked.
    */
   LDKCResult_SignatureNoneZ (*sign_holder_commitment)(const void *this_arg, const LDKHolderCommitmentTransaction *holder_commitment_tx);
   /**
    * Create a signature for each HTLC transaction spending a holder's commitment transaction.
    *
    * Unlike sign_holder_commitment, this may be called multiple times with *different*
    * holder_commitment_tx values. While this will never be called with a revoked
    * holder_commitment_tx, it is possible that it is called with the second-latest
    * holder_commitment_tx (only if we haven't yet revoked it) if some watchtower/secondary
    * ChannelMonitor decided to broadcast before it had been updated to the latest.
    *
    * Either an Err should be returned, or a Vec with one entry for each HTLC which exists in
    * holder_commitment_tx. For those HTLCs which have transaction_output_index set to None
    * (implying they were considered dust at the time the commitment transaction was negotiated),
    * a corresponding None should be included in the return value. All other positions in the
    * return value must contain a signature.
    */
   LDKCResult_CVec_SignatureZNoneZ (*sign_holder_commitment_htlc_transactions)(const void *this_arg, const LDKHolderCommitmentTransaction *holder_commitment_tx);
   /**
    * Create a signature for the given input in a transaction spending an HTLC or commitment
    * transaction output when our counterparty broadcasts an old state.
    *
    * A justice transaction may claim multiples outputs at the same time if timelocks are
    * similar, but only a signature for the input at index `input` should be signed for here.
    * It may be called multiples time for same output(s) if a fee-bump is needed with regards
    * to an upcoming timelock expiration.
    *
    * Amount is value of the output spent by this input, committed to in the BIP 143 signature.
    *
    * per_commitment_key is revocation secret which was provided by our counterparty when they
    * revoked the state which they eventually broadcast. It's not a _holder_ secret key and does
    * not allow the spending of any funds by itself (you need our holder revocation_secret to do
    * so).
    *
    * htlc holds HTLC elements (hash, timelock) if the output being spent is a HTLC output, thus
    * changing the format of the witness script (which is committed to in the BIP 143
    * signatures).
    */
   LDKCResult_SignatureNoneZ (*sign_justice_transaction)(const void *this_arg, LDKTransaction justice_tx, uintptr_t input, uint64_t amount, const uint8_t (*per_commitment_key)[32], const LDKHTLCOutputInCommitment *htlc);
   /**
    * Create a signature for a claiming transaction for a HTLC output on a counterparty's commitment
    * transaction, either offered or received.
    *
    * Such a transaction may claim multiples offered outputs at same time if we know the
    * preimage for each when we create it, but only the input at index `input` should be
    * signed for here. It may be called multiple times for same output(s) if a fee-bump is
    * needed with regards to an upcoming timelock expiration.
    *
    * Witness_script is either a offered or received script as defined in BOLT3 for HTLC
    * outputs.
    *
    * Amount is value of the output spent by this input, committed to in the BIP 143 signature.
    *
    * Per_commitment_point is the dynamic point corresponding to the channel state
    * detected onchain. It has been generated by our counterparty and is used to derive
    * channel state keys, which are then included in the witness script and committed to in the
    * BIP 143 signature.
    */
   LDKCResult_SignatureNoneZ (*sign_counterparty_htlc_transaction)(const void *this_arg, LDKTransaction htlc_tx, uintptr_t input, uint64_t amount, LDKPublicKey per_commitment_point, const LDKHTLCOutputInCommitment *htlc);
   /**
    * Create a signature for a (proposed) closing transaction.
    *
    * Note that, due to rounding, there may be one \"missing\" satoshi, and either party may have
    * chosen to forgo their output as dust.
    */
   LDKCResult_SignatureNoneZ (*sign_closing_transaction)(const void *this_arg, LDKTransaction closing_tx);
   /**
    * Signs a channel announcement message with our funding key, proving it comes from one
    * of the channel participants.
    *
    * Note that if this fails or is rejected, the channel will not be publicly announced and
    * our counterparty may (though likely will not) close the channel on us for violating the
    * protocol.
    */
   LDKCResult_SignatureNoneZ (*sign_channel_announcement)(const void *this_arg, const LDKUnsignedChannelAnnouncement *msg);
   /**
    * Set the counterparty channel basepoints and counterparty_selected/holder_selected_contest_delay.
    * This is done immediately on incoming channels and as soon as the channel is accepted on outgoing channels.
    *
    * We bind holder_selected_contest_delay late here for API convenience.
    *
    * Will be called before any signatures are applied.
    */
   void (*on_accept)(void *this_arg, const LDKChannelPublicKeys *channel_points, uint16_t counterparty_selected_contest_delay, uint16_t holder_selected_contest_delay);
   void *(*clone)(const void *this_arg);
   void (*free)(void *this_arg);
} LDKChannelKeys;



/**
 * A ChannelMonitor handles chain events (blocks connected and disconnected) and generates
 * on-chain transactions to ensure no loss of funds occurs.
 *
 * You MUST ensure that no ChannelMonitors for a given channel anywhere contain out-of-date
 * information and are actively monitoring the chain.
 *
 * Pending Events or updated HTLCs which have not yet been read out by
 * get_and_clear_pending_monitor_events or get_and_clear_pending_events are serialized to disk and
 * reloaded at deserialize-time. Thus, you must ensure that, when handling events, all events
 * gotten are fully handled before re-serializing the new state.
 */
typedef struct MUST_USE_STRUCT LDKChannelMonitor {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeChannelMonitor *inner;
   bool is_owned;
} LDKChannelMonitor;



/**
 * An update generated by the underlying Channel itself which contains some new information the
 * ChannelMonitor should be made aware of.
 */
typedef struct MUST_USE_STRUCT LDKChannelMonitorUpdate {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeChannelMonitorUpdate *inner;
   bool is_owned;
} LDKChannelMonitorUpdate;



/**
 * An event to be processed by the ChannelManager.
 */
typedef struct MUST_USE_STRUCT LDKMonitorEvent {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeMonitorEvent *inner;
   bool is_owned;
} LDKMonitorEvent;

typedef struct LDKCVecTempl_MonitorEvent {
   LDKMonitorEvent *data;
   uintptr_t datalen;
} LDKCVecTempl_MonitorEvent;

typedef LDKCVecTempl_MonitorEvent LDKCVec_MonitorEventZ;

/**
 * The `Watch` trait defines behavior for watching on-chain activity pertaining to channels as
 * blocks are connected and disconnected.
 *
 * Each channel is associated with a [`ChannelMonitor`]. Implementations of this trait are
 * responsible for maintaining a set of monitors such that they can be updated accordingly as
 * channel state changes and HTLCs are resolved. See method documentation for specific
 * requirements.
 *
 * Implementations **must** ensure that updates are successfully applied and persisted upon method
 * completion. If an update fails with a [`PermanentFailure`], then it must immediately shut down
 * without taking any further action such as persisting the current state.
 *
 * If an implementation maintains multiple instances of a channel's monitor (e.g., by storing
 * backup copies), then it must ensure that updates are applied across all instances. Otherwise, it
 * could result in a revoked transaction being broadcast, allowing the counterparty to claim all
 * funds in the channel. See [`ChannelMonitorUpdateErr`] for more details about how to handle
 * multiple instances.
 *
 * [`ChannelMonitor`]: channelmonitor/struct.ChannelMonitor.html
 * [`ChannelMonitorUpdateErr`]: channelmonitor/enum.ChannelMonitorUpdateErr.html
 * [`PermanentFailure`]: channelmonitor/enum.ChannelMonitorUpdateErr.html#variant.PermanentFailure
 */
typedef struct LDKWatch {
   void *this_arg;
   /**
    * Watches a channel identified by `funding_txo` using `monitor`.
    *
    * Implementations are responsible for watching the chain for the funding transaction along
    * with any spends of outputs returned by [`get_outputs_to_watch`]. In practice, this means
    * calling [`block_connected`] and [`block_disconnected`] on the monitor.
    *
    * [`get_outputs_to_watch`]: channelmonitor/struct.ChannelMonitor.html#method.get_outputs_to_watch
    * [`block_connected`]: channelmonitor/struct.ChannelMonitor.html#method.block_connected
    * [`block_disconnected`]: channelmonitor/struct.ChannelMonitor.html#method.block_disconnected
    */
   LDKCResult_NoneChannelMonitorUpdateErrZ (*watch_channel)(const void *this_arg, LDKOutPoint funding_txo, LDKChannelMonitor monitor);
   /**
    * Updates a channel identified by `funding_txo` by applying `update` to its monitor.
    *
    * Implementations must call [`update_monitor`] with the given update. See
    * [`ChannelMonitorUpdateErr`] for invariants around returning an error.
    *
    * [`update_monitor`]: channelmonitor/struct.ChannelMonitor.html#method.update_monitor
    * [`ChannelMonitorUpdateErr`]: channelmonitor/enum.ChannelMonitorUpdateErr.html
    */
   LDKCResult_NoneChannelMonitorUpdateErrZ (*update_channel)(const void *this_arg, LDKOutPoint funding_txo, LDKChannelMonitorUpdate update);
   /**
    * Returns any monitor events since the last call. Subsequent calls must only return new
    * events.
    */
   LDKCVec_MonitorEventZ (*release_pending_monitor_events)(const void *this_arg);
   void (*free)(void *this_arg);
} LDKWatch;

/**
 * The `Filter` trait defines behavior for indicating chain activity of interest pertaining to
 * channels.
 *
 * This is useful in order to have a [`Watch`] implementation convey to a chain source which
 * transactions to be notified of. Notification may take the form of pre-filtering blocks or, in
 * the case of [BIP 157]/[BIP 158], only fetching a block if the compact filter matches. If
 * receiving full blocks from a chain source, any further filtering is unnecessary.
 *
 * After an output has been registered, subsequent block retrievals from the chain source must not
 * exclude any transactions matching the new criteria nor any in-block descendants of such
 * transactions.
 *
 * Note that use as part of a [`Watch`] implementation involves reentrancy. Therefore, the `Filter`
 * should not block on I/O. Implementations should instead queue the newly monitored data to be
 * processed later. Then, in order to block until the data has been processed, any `Watch`
 * invocation that has called the `Filter` must return [`TemporaryFailure`].
 *
 * [`Watch`]: trait.Watch.html
 * [`TemporaryFailure`]: channelmonitor/enum.ChannelMonitorUpdateErr.html#variant.TemporaryFailure
 * [BIP 157]: https://github.com/bitcoin/bips/blob/master/bip-0157.mediawiki
 * [BIP 158]: https://github.com/bitcoin/bips/blob/master/bip-0158.mediawiki
 */
typedef struct LDKFilter {
   void *this_arg;
   /**
    * Registers interest in a transaction with `txid` and having an output with `script_pubkey` as
    * a spending condition.
    */
   void (*register_tx)(const void *this_arg, const uint8_t (*txid)[32], LDKu8slice script_pubkey);
   /**
    * Registers interest in spends of a transaction output identified by `outpoint` having
    * `script_pubkey` as the spending condition.
    */
   void (*register_output)(const void *this_arg, const LDKOutPoint *outpoint, LDKu8slice script_pubkey);
   void (*free)(void *this_arg);
} LDKFilter;

/**
 * An interface to send a transaction to the Bitcoin network.
 */
typedef struct LDKBroadcasterInterface {
   void *this_arg;
   /**
    * Sends a transaction out to (hopefully) be mined.
    */
   void (*broadcast_transaction)(const void *this_arg, LDKTransaction tx);
   void (*free)(void *this_arg);
} LDKBroadcasterInterface;

/**
 * A trait which should be implemented to provide feerate information on a number of time
 * horizons.
 *
 * Note that all of the functions implemented here *must* be reentrant-safe (obviously - they're
 * called from inside the library in response to chain events, P2P events, or timer events).
 */
typedef struct LDKFeeEstimator {
   void *this_arg;
   /**
    * Gets estimated satoshis of fee required per 1000 Weight-Units.
    *
    * Must be no smaller than 253 (ie 1 satoshi-per-byte rounded up to ensure later round-downs
    * don't put us below 1 satoshi-per-byte).
    *
    * This translates to:
    *  * satoshis-per-byte * 250
    *  * ceil(satoshis-per-kbyte / 4)
    */
   uint32_t (*get_est_sat_per_1000_weight)(const void *this_arg, LDKConfirmationTarget confirmation_target);
   void (*free)(void *this_arg);
} LDKFeeEstimator;



/**
 * An implementation of [`chain::Watch`] for monitoring channels.
 *
 * Connected and disconnected blocks must be provided to `ChainMonitor` as documented by
 * [`chain::Watch`]. May be used in conjunction with [`ChannelManager`] to monitor channels locally
 * or used independently to monitor channels remotely. See the [module-level documentation] for
 * details.
 *
 * [`chain::Watch`]: ../trait.Watch.html
 * [`ChannelManager`]: ../../ln/channelmanager/struct.ChannelManager.html
 * [module-level documentation]: index.html
 */
typedef struct MUST_USE_STRUCT LDKChainMonitor {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeChainMonitor *inner;
   bool is_owned;
} LDKChainMonitor;

typedef struct LDKCVecTempl_C2TupleTempl_usize__Transaction {
   LDKC2TupleTempl_usize__Transaction *data;
   uintptr_t datalen;
} LDKCVecTempl_C2TupleTempl_usize__Transaction;

typedef LDKCVecTempl_C2TupleTempl_usize__Transaction LDKCVec_C2Tuple_usizeTransactionZZ;



/**
 * Simple structure sent back by `chain::Watch` when an HTLC from a forward channel is detected on
 * chain. Used to update the corresponding HTLC in the backward channel. Failing to pass the
 * preimage claim backward will lead to loss of funds.
 *
 * [`chain::Watch`]: ../trait.Watch.html
 */
typedef struct MUST_USE_STRUCT LDKHTLCUpdate {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeHTLCUpdate *inner;
   bool is_owned;
} LDKHTLCUpdate;

typedef struct LDKCVecTempl_Transaction {
   LDKTransaction *data;
   uintptr_t datalen;
} LDKCVecTempl_Transaction;

typedef LDKCVecTempl_Transaction LDKCVec_TransactionZ;

typedef struct LDKCVecTempl_C2TupleTempl_ThirtyTwoBytes__CVecTempl_TxOut {
   LDKC2TupleTempl_ThirtyTwoBytes__CVecTempl_TxOut *data;
   uintptr_t datalen;
} LDKCVecTempl_C2TupleTempl_ThirtyTwoBytes__CVecTempl_TxOut;

typedef LDKCVecTempl_C2TupleTempl_ThirtyTwoBytes__CVecTempl_TxOut LDKCVec_C2Tuple_TxidCVec_TxOutZZZ;

typedef struct LDKSecretKey {
   uint8_t bytes[32];
} LDKSecretKey;

/**
 * A trait to describe an object which can get user secrets and key material.
 */
typedef struct LDKKeysInterface {
   void *this_arg;
   /**
    * Get node secret key (aka node_id or network_key)
    */
   LDKSecretKey (*get_node_secret)(const void *this_arg);
   /**
    * Get destination redeemScript to encumber static protocol exit points.
    */
   LDKCVec_u8Z (*get_destination_script)(const void *this_arg);
   /**
    * Get shutdown_pubkey to use as PublicKey at channel closure
    */
   LDKPublicKey (*get_shutdown_pubkey)(const void *this_arg);
   /**
    * Get a new set of ChannelKeys for per-channel secrets. These MUST be unique even if you
    * restarted with some stale data!
    */
   LDKChannelKeys (*get_channel_keys)(const void *this_arg, bool inbound, uint64_t channel_value_satoshis);
   /**
    * Gets a unique, cryptographically-secure, random 32 byte value. This is used for encrypting
    * onion packets and for temporary channel IDs. There is no requirement that these be
    * persisted anywhere, though they must be unique across restarts.
    */
   LDKThirtyTwoBytes (*get_secure_random_bytes)(const void *this_arg);
   void (*free)(void *this_arg);
} LDKKeysInterface;



/**
 * A simple implementation of ChannelKeys that just keeps the private keys in memory.
 */
typedef struct MUST_USE_STRUCT LDKInMemoryChannelKeys {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeInMemoryChannelKeys *inner;
   bool is_owned;
} LDKInMemoryChannelKeys;



/**
 * Simple KeysInterface implementor that takes a 32-byte seed for use as a BIP 32 extended key
 * and derives keys from that.
 *
 * Your node_id is seed/0'
 * ChannelMonitor closes may use seed/1'
 * Cooperative closes may use seed/2'
 * The two close keys may be needed to claim on-chain funds!
 */
typedef struct MUST_USE_STRUCT LDKKeysManager {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeKeysManager *inner;
   bool is_owned;
} LDKKeysManager;



/**
 * Manager which keeps track of a number of channels and sends messages to the appropriate
 * channel, also tracking HTLC preimages and forwarding onion packets appropriately.
 *
 * Implements ChannelMessageHandler, handling the multi-channel parts and passing things through
 * to individual Channels.
 *
 * Implements Writeable to write out all channel state to disk. Implies peer_disconnected() for
 * all peers during write/read (though does not modify this instance, only the instance being
 * serialized). This will result in any channels which have not yet exchanged funding_created (ie
 * called funding_transaction_generated for outbound channels).
 *
 * Note that you can be a bit lazier about writing out ChannelManager than you can be with
 * ChannelMonitors. With ChannelMonitors you MUST write each monitor update out to disk before
 * returning from chain::Watch::watch_/update_channel, with ChannelManagers, writing updates
 * happens out-of-band (and will prevent any other ChannelManager operations from occurring during
 * the serialization process). If the deserialized version is out-of-date compared to the
 * ChannelMonitors passed by reference to read(), those channels will be force-closed based on the
 * ChannelMonitor state and no funds will be lost (mod on-chain transaction fees).
 *
 * Note that the deserializer is only implemented for (Sha256dHash, ChannelManager), which
 * tells you the last block hash which was block_connect()ed. You MUST rescan any blocks along
 * the \"reorg path\" (ie call block_disconnected() until you get to a common block and then call
 * block_connected() to step towards your best block) upon deserialization before using the
 * object!
 *
 * Note that ChannelManager is responsible for tracking liveness of its channels and generating
 * ChannelUpdate messages informing peers that the channel is temporarily disabled. To avoid
 * spam due to quick disconnection/reconnection, updates are not sent until the channel has been
 * offline for a full minute. In order to track this, you must call
 * timer_chan_freshness_every_min roughly once per minute, though it doesn't have to be perfect.
 *
 * Rather than using a plain ChannelManager, it is preferable to use either a SimpleArcChannelManager
 * a SimpleRefChannelManager, for conciseness. See their documentation for more details, but
 * essentially you should default to using a SimpleRefChannelManager, and use a
 * SimpleArcChannelManager when you require a ChannelManager with a static lifetime, such as when
 * you're using lightning-net-tokio.
 */
typedef struct MUST_USE_STRUCT LDKChannelManager {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeChannelManager *inner;
   bool is_owned;
} LDKChannelManager;



/**
 * Details of a channel, as returned by ChannelManager::list_channels and ChannelManager::list_usable_channels
 */
typedef struct MUST_USE_STRUCT LDKChannelDetails {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeChannelDetails *inner;
   bool is_owned;
} LDKChannelDetails;



/**
 * Features used within an `init` message.
 */
typedef struct MUST_USE_STRUCT LDKInitFeatures {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeInitFeatures *inner;
   bool is_owned;
} LDKInitFeatures;

typedef struct LDKCVecTempl_ChannelDetails {
   LDKChannelDetails *data;
   uintptr_t datalen;
} LDKCVecTempl_ChannelDetails;

typedef LDKCVecTempl_ChannelDetails LDKCVec_ChannelDetailsZ;



/**
 * A route directs a payment from the sender (us) to the recipient. If the recipient supports MPP,
 * it can take multiple paths. Each path is composed of one or more hops through the network.
 */
typedef struct MUST_USE_STRUCT LDKRoute {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeRoute *inner;
   bool is_owned;
} LDKRoute;

typedef struct LDKThreeBytes {
   uint8_t data[3];
} LDKThreeBytes;

typedef struct LDKFourBytes {
   uint8_t data[4];
} LDKFourBytes;

typedef struct LDKSixteenBytes {
   uint8_t data[16];
} LDKSixteenBytes;

typedef struct LDKTenBytes {
   uint8_t data[10];
} LDKTenBytes;

/**
 * An address which can be used to connect to a remote peer
 */
typedef enum LDKNetAddress_Tag {
   /**
    * An IPv4 address/port on which the peer is listening.
    */
   LDKNetAddress_IPv4,
   /**
    * An IPv6 address/port on which the peer is listening.
    */
   LDKNetAddress_IPv6,
   /**
    * An old-style Tor onion address/port on which the peer is listening.
    */
   LDKNetAddress_OnionV2,
   /**
    * A new-style Tor onion address/port on which the peer is listening.
    * To create the human-readable \"hostname\", concatenate ed25519_pubkey, checksum, and version,
    * wrap as base32 and append \".onion\".
    */
   LDKNetAddress_OnionV3,
   /**
    * Must be last for serialization purposes
    */
   LDKNetAddress_Sentinel,
} LDKNetAddress_Tag;

typedef struct LDKNetAddress_LDKIPv4_Body {
   LDKFourBytes addr;
   uint16_t port;
} LDKNetAddress_LDKIPv4_Body;

typedef struct LDKNetAddress_LDKIPv6_Body {
   LDKSixteenBytes addr;
   uint16_t port;
} LDKNetAddress_LDKIPv6_Body;

typedef struct LDKNetAddress_LDKOnionV2_Body {
   LDKTenBytes addr;
   uint16_t port;
} LDKNetAddress_LDKOnionV2_Body;

typedef struct LDKNetAddress_LDKOnionV3_Body {
   LDKThirtyTwoBytes ed25519_pubkey;
   uint16_t checksum;
   uint8_t version;
   uint16_t port;
} LDKNetAddress_LDKOnionV3_Body;

typedef struct LDKNetAddress {
   LDKNetAddress_Tag tag;
   union {
      LDKNetAddress_LDKIPv4_Body i_pv4;
      LDKNetAddress_LDKIPv6_Body i_pv6;
      LDKNetAddress_LDKOnionV2_Body onion_v2;
      LDKNetAddress_LDKOnionV3_Body onion_v3;
   };
} LDKNetAddress;

typedef struct LDKCVecTempl_NetAddress {
   LDKNetAddress *data;
   uintptr_t datalen;
} LDKCVecTempl_NetAddress;

typedef LDKCVecTempl_NetAddress LDKCVec_NetAddressZ;



/**
 * An update_add_htlc message to be sent or received from a peer
 */
typedef struct MUST_USE_STRUCT LDKUpdateAddHTLC {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeUpdateAddHTLC *inner;
   bool is_owned;
} LDKUpdateAddHTLC;



/**
 * An update_fulfill_htlc message to be sent or received from a peer
 */
typedef struct MUST_USE_STRUCT LDKUpdateFulfillHTLC {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeUpdateFulfillHTLC *inner;
   bool is_owned;
} LDKUpdateFulfillHTLC;



/**
 * An update_fail_htlc message to be sent or received from a peer
 */
typedef struct MUST_USE_STRUCT LDKUpdateFailHTLC {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeUpdateFailHTLC *inner;
   bool is_owned;
} LDKUpdateFailHTLC;



/**
 * An update_fail_malformed_htlc message to be sent or received from a peer
 */
typedef struct MUST_USE_STRUCT LDKUpdateFailMalformedHTLC {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeUpdateFailMalformedHTLC *inner;
   bool is_owned;
} LDKUpdateFailMalformedHTLC;



/**
 * A commitment_signed message to be sent or received from a peer
 */
typedef struct MUST_USE_STRUCT LDKCommitmentSigned {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeCommitmentSigned *inner;
   bool is_owned;
} LDKCommitmentSigned;



/**
 * An update_fee message to be sent or received from a peer
 */
typedef struct MUST_USE_STRUCT LDKUpdateFee {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeUpdateFee *inner;
   bool is_owned;
} LDKUpdateFee;



/**
 * An init message to be sent or received from a peer
 */
typedef struct MUST_USE_STRUCT LDKInit {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeInit *inner;
   bool is_owned;
} LDKInit;

/**
 * A trait to describe an object which can receive channel messages.
 *
 * Messages MAY be called in parallel when they originate from different their_node_ids, however
 * they MUST NOT be called in parallel when the two calls have the same their_node_id.
 */
typedef struct LDKChannelMessageHandler {
   void *this_arg;
   /**
    * Handle an incoming open_channel message from the given peer.
    */
   void (*handle_open_channel)(const void *this_arg, LDKPublicKey their_node_id, LDKInitFeatures their_features, const LDKOpenChannel *msg);
   /**
    * Handle an incoming accept_channel message from the given peer.
    */
   void (*handle_accept_channel)(const void *this_arg, LDKPublicKey their_node_id, LDKInitFeatures their_features, const LDKAcceptChannel *msg);
   /**
    * Handle an incoming funding_created message from the given peer.
    */
   void (*handle_funding_created)(const void *this_arg, LDKPublicKey their_node_id, const LDKFundingCreated *msg);
   /**
    * Handle an incoming funding_signed message from the given peer.
    */
   void (*handle_funding_signed)(const void *this_arg, LDKPublicKey their_node_id, const LDKFundingSigned *msg);
   /**
    * Handle an incoming funding_locked message from the given peer.
    */
   void (*handle_funding_locked)(const void *this_arg, LDKPublicKey their_node_id, const LDKFundingLocked *msg);
   /**
    * Handle an incoming shutdown message from the given peer.
    */
   void (*handle_shutdown)(const void *this_arg, LDKPublicKey their_node_id, const LDKShutdown *msg);
   /**
    * Handle an incoming closing_signed message from the given peer.
    */
   void (*handle_closing_signed)(const void *this_arg, LDKPublicKey their_node_id, const LDKClosingSigned *msg);
   /**
    * Handle an incoming update_add_htlc message from the given peer.
    */
   void (*handle_update_add_htlc)(const void *this_arg, LDKPublicKey their_node_id, const LDKUpdateAddHTLC *msg);
   /**
    * Handle an incoming update_fulfill_htlc message from the given peer.
    */
   void (*handle_update_fulfill_htlc)(const void *this_arg, LDKPublicKey their_node_id, const LDKUpdateFulfillHTLC *msg);
   /**
    * Handle an incoming update_fail_htlc message from the given peer.
    */
   void (*handle_update_fail_htlc)(const void *this_arg, LDKPublicKey their_node_id, const LDKUpdateFailHTLC *msg);
   /**
    * Handle an incoming update_fail_malformed_htlc message from the given peer.
    */
   void (*handle_update_fail_malformed_htlc)(const void *this_arg, LDKPublicKey their_node_id, const LDKUpdateFailMalformedHTLC *msg);
   /**
    * Handle an incoming commitment_signed message from the given peer.
    */
   void (*handle_commitment_signed)(const void *this_arg, LDKPublicKey their_node_id, const LDKCommitmentSigned *msg);
   /**
    * Handle an incoming revoke_and_ack message from the given peer.
    */
   void (*handle_revoke_and_ack)(const void *this_arg, LDKPublicKey their_node_id, const LDKRevokeAndACK *msg);
   /**
    * Handle an incoming update_fee message from the given peer.
    */
   void (*handle_update_fee)(const void *this_arg, LDKPublicKey their_node_id, const LDKUpdateFee *msg);
   /**
    * Handle an incoming announcement_signatures message from the given peer.
    */
   void (*handle_announcement_signatures)(const void *this_arg, LDKPublicKey their_node_id, const LDKAnnouncementSignatures *msg);
   /**
    * Indicates a connection to the peer failed/an existing connection was lost. If no connection
    * is believed to be possible in the future (eg they're sending us messages we don't
    * understand or indicate they require unknown feature bits), no_connection_possible is set
    * and any outstanding channels should be failed.
    */
   void (*peer_disconnected)(const void *this_arg, LDKPublicKey their_node_id, bool no_connection_possible);
   /**
    * Handle a peer reconnecting, possibly generating channel_reestablish message(s).
    */
   void (*peer_connected)(const void *this_arg, LDKPublicKey their_node_id, const LDKInit *msg);
   /**
    * Handle an incoming channel_reestablish message from the given peer.
    */
   void (*handle_channel_reestablish)(const void *this_arg, LDKPublicKey their_node_id, const LDKChannelReestablish *msg);
   /**
    * Handle an incoming error message from the given peer.
    */
   void (*handle_error)(const void *this_arg, LDKPublicKey their_node_id, const LDKErrorMessage *msg);
   LDKMessageSendEventsProvider MessageSendEventsProvider;
   void (*free)(void *this_arg);
} LDKChannelMessageHandler;



/**
 * Arguments for the creation of a ChannelManager that are not deserialized.
 *
 * At a high-level, the process for deserializing a ChannelManager and resuming normal operation
 * is:
 * 1) Deserialize all stored ChannelMonitors.
 * 2) Deserialize the ChannelManager by filling in this struct and calling <(Sha256dHash,
 *    ChannelManager)>::read(reader, args).
 *    This may result in closing some Channels if the ChannelMonitor is newer than the stored
 *    ChannelManager state to ensure no loss of funds. Thus, transactions may be broadcasted.
 * 3) Register all relevant ChannelMonitor outpoints with your chain watch mechanism using
 *    ChannelMonitor::get_outputs_to_watch() and ChannelMonitor::get_funding_txo().
 * 4) Reconnect blocks on your ChannelMonitors.
 * 5) Move the ChannelMonitors into your local chain::Watch.
 * 6) Disconnect/connect blocks on the ChannelManager.
 */
typedef struct MUST_USE_STRUCT LDKChannelManagerReadArgs {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeChannelManagerReadArgs *inner;
   bool is_owned;
} LDKChannelManagerReadArgs;

typedef struct LDKCVecTempl_ChannelMonitor {
   LDKChannelMonitor *data;
   uintptr_t datalen;
} LDKCVecTempl_ChannelMonitor;

typedef LDKCVecTempl_ChannelMonitor LDKCVec_ChannelMonitorZ;



/**
 * An error in decoding a message or struct.
 */
typedef struct MUST_USE_STRUCT LDKDecodeError {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeDecodeError *inner;
   bool is_owned;
} LDKDecodeError;



/**
 * A ping message to be sent or received from a peer
 */
typedef struct MUST_USE_STRUCT LDKPing {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativePing *inner;
   bool is_owned;
} LDKPing;



/**
 * A pong message to be sent or received from a peer
 */
typedef struct MUST_USE_STRUCT LDKPong {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativePong *inner;
   bool is_owned;
} LDKPong;



/**
 * Proof that the sender knows the per-commitment secret of the previous commitment transaction.
 * This is used to convince the recipient that the channel is at a certain commitment
 * number even if they lost that data due to a local failure.  Of course, the peer may lie
 * and even later commitments may have been revoked.
 */
typedef struct MUST_USE_STRUCT LDKDataLossProtect {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeDataLossProtect *inner;
   bool is_owned;
} LDKDataLossProtect;



/**
 * The unsigned part of a node_announcement
 */
typedef struct MUST_USE_STRUCT LDKUnsignedNodeAnnouncement {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeUnsignedNodeAnnouncement *inner;
   bool is_owned;
} LDKUnsignedNodeAnnouncement;



/**
 * Features used within a `node_announcement` message.
 */
typedef struct MUST_USE_STRUCT LDKNodeFeatures {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeNodeFeatures *inner;
   bool is_owned;
} LDKNodeFeatures;



/**
 * Features used within a `channel_announcement` message.
 */
typedef struct MUST_USE_STRUCT LDKChannelFeatures {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeChannelFeatures *inner;
   bool is_owned;
} LDKChannelFeatures;



/**
 * The unsigned part of a channel_update
 */
typedef struct MUST_USE_STRUCT LDKUnsignedChannelUpdate {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeUnsignedChannelUpdate *inner;
   bool is_owned;
} LDKUnsignedChannelUpdate;



/**
 * A query_channel_range message is used to query a peer for channel
 * UTXOs in a range of blocks. The recipient of a query makes a best
 * effort to reply to the query using one or more reply_channel_range
 * messages.
 */
typedef struct MUST_USE_STRUCT LDKQueryChannelRange {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeQueryChannelRange *inner;
   bool is_owned;
} LDKQueryChannelRange;



/**
 * A reply_channel_range message is a reply to a query_channel_range
 * message. Multiple reply_channel_range messages can be sent in reply
 * to a single query_channel_range message. The query recipient makes a
 * best effort to respond based on their local network view which may
 * not be a perfect view of the network. The short_channel_ids in the
 * reply are encoded. We only support encoding_type=0 uncompressed
 * serialization and do not support encoding_type=1 zlib serialization.
 */
typedef struct MUST_USE_STRUCT LDKReplyChannelRange {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeReplyChannelRange *inner;
   bool is_owned;
} LDKReplyChannelRange;

typedef struct LDKCVecTempl_u64 {
   uint64_t *data;
   uintptr_t datalen;
} LDKCVecTempl_u64;

typedef LDKCVecTempl_u64 LDKCVec_u64Z;



/**
 * A query_short_channel_ids message is used to query a peer for
 * routing gossip messages related to one or more short_channel_ids.
 * The query recipient will reply with the latest, if available,
 * channel_announcement, channel_update and node_announcement messages
 * it maintains for the requested short_channel_ids followed by a
 * reply_short_channel_ids_end message. The short_channel_ids sent in
 * this query are encoded. We only support encoding_type=0 uncompressed
 * serialization and do not support encoding_type=1 zlib serialization.
 */
typedef struct MUST_USE_STRUCT LDKQueryShortChannelIds {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeQueryShortChannelIds *inner;
   bool is_owned;
} LDKQueryShortChannelIds;



/**
 * A reply_short_channel_ids_end message is sent as a reply to a
 * query_short_channel_ids message. The query recipient makes a best
 * effort to respond based on their local network view which may not be
 * a perfect view of the network.
 */
typedef struct MUST_USE_STRUCT LDKReplyShortChannelIdsEnd {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeReplyShortChannelIdsEnd *inner;
   bool is_owned;
} LDKReplyShortChannelIdsEnd;



/**
 * A gossip_timestamp_filter message is used by a node to request
 * gossip relay for messages in the requested time range when the
 * gossip_queries feature has been negotiated.
 */
typedef struct MUST_USE_STRUCT LDKGossipTimestampFilter {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeGossipTimestampFilter *inner;
   bool is_owned;
} LDKGossipTimestampFilter;



/**
 * An Err type for failure to process messages.
 */
typedef struct MUST_USE_STRUCT LDKLightningError {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeLightningError *inner;
   bool is_owned;
} LDKLightningError;

typedef struct LDKCVecTempl_UpdateAddHTLC {
   LDKUpdateAddHTLC *data;
   uintptr_t datalen;
} LDKCVecTempl_UpdateAddHTLC;

typedef LDKCVecTempl_UpdateAddHTLC LDKCVec_UpdateAddHTLCZ;

typedef struct LDKCVecTempl_UpdateFulfillHTLC {
   LDKUpdateFulfillHTLC *data;
   uintptr_t datalen;
} LDKCVecTempl_UpdateFulfillHTLC;

typedef LDKCVecTempl_UpdateFulfillHTLC LDKCVec_UpdateFulfillHTLCZ;

typedef struct LDKCVecTempl_UpdateFailHTLC {
   LDKUpdateFailHTLC *data;
   uintptr_t datalen;
} LDKCVecTempl_UpdateFailHTLC;

typedef LDKCVecTempl_UpdateFailHTLC LDKCVec_UpdateFailHTLCZ;

typedef struct LDKCVecTempl_UpdateFailMalformedHTLC {
   LDKUpdateFailMalformedHTLC *data;
   uintptr_t datalen;
} LDKCVecTempl_UpdateFailMalformedHTLC;

typedef LDKCVecTempl_UpdateFailMalformedHTLC LDKCVec_UpdateFailMalformedHTLCZ;

typedef union LDKCResultPtr_bool__LightningError {
   bool *result;
   LDKLightningError *err;
} LDKCResultPtr_bool__LightningError;

typedef struct LDKCResultTempl_bool__LightningError {
   LDKCResultPtr_bool__LightningError contents;
   bool result_ok;
} LDKCResultTempl_bool__LightningError;

typedef LDKCResultTempl_bool__LightningError LDKCResult_boolLightningErrorZ;

typedef struct LDKCVecTempl_C3TupleTempl_ChannelAnnouncement__ChannelUpdate__ChannelUpdate {
   LDKC3TupleTempl_ChannelAnnouncement__ChannelUpdate__ChannelUpdate *data;
   uintptr_t datalen;
} LDKCVecTempl_C3TupleTempl_ChannelAnnouncement__ChannelUpdate__ChannelUpdate;

typedef LDKCVecTempl_C3TupleTempl_ChannelAnnouncement__ChannelUpdate__ChannelUpdate LDKCVec_C3Tuple_ChannelAnnouncementChannelUpdateChannelUpdateZZ;

typedef struct LDKCVecTempl_NodeAnnouncement {
   LDKNodeAnnouncement *data;
   uintptr_t datalen;
} LDKCVecTempl_NodeAnnouncement;

typedef LDKCVecTempl_NodeAnnouncement LDKCVec_NodeAnnouncementZ;

/**
 * A trait to describe an object which can receive routing messages.
 */
typedef struct LDKRoutingMessageHandler {
   void *this_arg;
   /**
    * Handle an incoming node_announcement message, returning true if it should be forwarded on,
    * false or returning an Err otherwise.
    */
   LDKCResult_boolLightningErrorZ (*handle_node_announcement)(const void *this_arg, const LDKNodeAnnouncement *msg);
   /**
    * Handle a channel_announcement message, returning true if it should be forwarded on, false
    * or returning an Err otherwise.
    */
   LDKCResult_boolLightningErrorZ (*handle_channel_announcement)(const void *this_arg, const LDKChannelAnnouncement *msg);
   /**
    * Handle an incoming channel_update message, returning true if it should be forwarded on,
    * false or returning an Err otherwise.
    */
   LDKCResult_boolLightningErrorZ (*handle_channel_update)(const void *this_arg, const LDKChannelUpdate *msg);
   /**
    * Handle some updates to the route graph that we learned due to an outbound failed payment.
    */
   void (*handle_htlc_fail_channel_update)(const void *this_arg, const LDKHTLCFailChannelUpdate *update);
   /**
    * Gets a subset of the channel announcements and updates required to dump our routing table
    * to a remote node, starting at the short_channel_id indicated by starting_point and
    * including the batch_amount entries immediately higher in numerical value than starting_point.
    */
   LDKCVec_C3Tuple_ChannelAnnouncementChannelUpdateChannelUpdateZZ (*get_next_channel_announcements)(const void *this_arg, uint64_t starting_point, uint8_t batch_amount);
   /**
    * Gets a subset of the node announcements required to dump our routing table to a remote node,
    * starting at the node *after* the provided publickey and including batch_amount entries
    * immediately higher (as defined by <PublicKey as Ord>::cmp) than starting_point.
    * If None is provided for starting_point, we start at the first node.
    */
   LDKCVec_NodeAnnouncementZ (*get_next_node_announcements)(const void *this_arg, LDKPublicKey starting_point, uint8_t batch_amount);
   /**
    * Returns whether a full sync should be requested from a peer.
    */
   bool (*should_request_full_sync)(const void *this_arg, LDKPublicKey node_id);
   void (*free)(void *this_arg);
} LDKRoutingMessageHandler;



/**
 * Provides references to trait impls which handle different types of messages.
 */
typedef struct MUST_USE_STRUCT LDKMessageHandler {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeMessageHandler *inner;
   bool is_owned;
} LDKMessageHandler;

/**
 * Provides an object which can be used to send data to and which uniquely identifies a connection
 * to a remote host. You will need to be able to generate multiple of these which meet Eq and
 * implement Hash to meet the PeerManager API.
 *
 * For efficiency, Clone should be relatively cheap for this type.
 *
 * You probably want to just extend an int and put a file descriptor in a struct and implement
 * send_data. Note that if you are using a higher-level net library that may call close() itself,
 * be careful to ensure you don't have races whereby you might register a new connection with an
 * fd which is the same as a previous one which has yet to be removed via
 * PeerManager::socket_disconnected().
 */
typedef struct LDKSocketDescriptor {
   void *this_arg;
   /**
    * Attempts to send some data from the given slice to the peer.
    *
    * Returns the amount of data which was sent, possibly 0 if the socket has since disconnected.
    * Note that in the disconnected case, socket_disconnected must still fire and further write
    * attempts may occur until that time.
    *
    * If the returned size is smaller than data.len(), a write_available event must
    * trigger the next time more data can be written. Additionally, until the a send_data event
    * completes fully, no further read_events should trigger on the same peer!
    *
    * If a read_event on this descriptor had previously returned true (indicating that read
    * events should be paused to prevent DoS in the send buffer), resume_read may be set
    * indicating that read events on this descriptor should resume. A resume_read of false does
    * *not* imply that further read events should be paused.
    */
   uintptr_t (*send_data)(void *this_arg, LDKu8slice data, bool resume_read);
   /**
    * Disconnect the socket pointed to by this SocketDescriptor. Once this function returns, no
    * more calls to write_buffer_space_avail, read_event or socket_disconnected may be made with
    * this descriptor. No socket_disconnected call should be generated as a result of this call,
    * though races may occur whereby disconnect_socket is called after a call to
    * socket_disconnected but prior to socket_disconnected returning.
    */
   void (*disconnect_socket)(void *this_arg);
   bool (*eq)(const void *this_arg, const void *other_arg);
   uint64_t (*hash)(const void *this_arg);
   void *(*clone)(const void *this_arg);
   void (*free)(void *this_arg);
} LDKSocketDescriptor;



/**
 * A PeerManager manages a set of peers, described by their SocketDescriptor and marshalls socket
 * events into messages which it passes on to its MessageHandlers.
 *
 * Rather than using a plain PeerManager, it is preferable to use either a SimpleArcPeerManager
 * a SimpleRefPeerManager, for conciseness. See their documentation for more details, but
 * essentially you should default to using a SimpleRefPeerManager, and use a
 * SimpleArcPeerManager when you require a PeerManager with a static lifetime, such as when
 * you're using lightning-net-tokio.
 */
typedef struct MUST_USE_STRUCT LDKPeerManager {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativePeerManager *inner;
   bool is_owned;
} LDKPeerManager;

typedef struct LDKCVecTempl_PublicKey {
   LDKPublicKey *data;
   uintptr_t datalen;
} LDKCVecTempl_PublicKey;

typedef LDKCVecTempl_PublicKey LDKCVec_PublicKeyZ;

typedef union LDKCResultPtr_CVecTempl_u8_____PeerHandleError {
   LDKCVecTempl_u8 *result;
   LDKPeerHandleError *err;
} LDKCResultPtr_CVecTempl_u8_____PeerHandleError;

typedef struct LDKCResultTempl_CVecTempl_u8_____PeerHandleError {
   LDKCResultPtr_CVecTempl_u8_____PeerHandleError contents;
   bool result_ok;
} LDKCResultTempl_CVecTempl_u8_____PeerHandleError;

typedef LDKCResultTempl_CVecTempl_u8_____PeerHandleError LDKCResult_CVec_u8ZPeerHandleErrorZ;

typedef union LDKCResultPtr_bool__PeerHandleError {
   bool *result;
   LDKPeerHandleError *err;
} LDKCResultPtr_bool__PeerHandleError;

typedef struct LDKCResultTempl_bool__PeerHandleError {
   LDKCResultPtr_bool__PeerHandleError contents;
   bool result_ok;
} LDKCResultTempl_bool__PeerHandleError;

typedef LDKCResultTempl_bool__PeerHandleError LDKCResult_boolPeerHandleErrorZ;

typedef union LDKCResultPtr_SecretKey__Secp256k1Error {
   LDKSecretKey *result;
   LDKSecp256k1Error *err;
} LDKCResultPtr_SecretKey__Secp256k1Error;

typedef struct LDKCResultTempl_SecretKey__Secp256k1Error {
   LDKCResultPtr_SecretKey__Secp256k1Error contents;
   bool result_ok;
} LDKCResultTempl_SecretKey__Secp256k1Error;

typedef LDKCResultTempl_SecretKey__Secp256k1Error LDKCResult_SecretKeySecpErrorZ;

typedef union LDKCResultPtr_PublicKey__Secp256k1Error {
   LDKPublicKey *result;
   LDKSecp256k1Error *err;
} LDKCResultPtr_PublicKey__Secp256k1Error;

typedef struct LDKCResultTempl_PublicKey__Secp256k1Error {
   LDKCResultPtr_PublicKey__Secp256k1Error contents;
   bool result_ok;
} LDKCResultTempl_PublicKey__Secp256k1Error;

typedef LDKCResultTempl_PublicKey__Secp256k1Error LDKCResult_PublicKeySecpErrorZ;



/**
 * The set of public keys which are used in the creation of one commitment transaction.
 * These are derived from the channel base keys and per-commitment data.
 *
 * A broadcaster key is provided from potential broadcaster of the computed transaction.
 * A countersignatory key is coming from a protocol participant unable to broadcast the
 * transaction.
 *
 * These keys are assumed to be good, either because the code derived them from
 * channel basepoints via the new function, or they were obtained via
 * PreCalculatedTxCreationKeys.trust_key_derivation because we trusted the source of the
 * pre-calculated keys.
 */
typedef struct MUST_USE_STRUCT LDKTxCreationKeys {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeTxCreationKeys *inner;
   bool is_owned;
} LDKTxCreationKeys;

typedef union LDKCResultPtr_TxCreationKeys__Secp256k1Error {
   LDKTxCreationKeys *result;
   LDKSecp256k1Error *err;
} LDKCResultPtr_TxCreationKeys__Secp256k1Error;

typedef struct LDKCResultTempl_TxCreationKeys__Secp256k1Error {
   LDKCResultPtr_TxCreationKeys__Secp256k1Error contents;
   bool result_ok;
} LDKCResultTempl_TxCreationKeys__Secp256k1Error;

typedef LDKCResultTempl_TxCreationKeys__Secp256k1Error LDKCResult_TxCreationKeysSecpErrorZ;

typedef struct LDKCVecTempl_C2TupleTempl_HTLCOutputInCommitment__Signature {
   LDKC2TupleTempl_HTLCOutputInCommitment__Signature *data;
   uintptr_t datalen;
} LDKCVecTempl_C2TupleTempl_HTLCOutputInCommitment__Signature;

typedef LDKCVecTempl_C2TupleTempl_HTLCOutputInCommitment__Signature LDKCVec_C2Tuple_HTLCOutputInCommitmentSignatureZZ;



/**
 * A hop in a route
 */
typedef struct MUST_USE_STRUCT LDKRouteHop {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeRouteHop *inner;
   bool is_owned;
} LDKRouteHop;

typedef struct LDKCVecTempl_RouteHop {
   LDKRouteHop *data;
   uintptr_t datalen;
} LDKCVecTempl_RouteHop;

typedef struct LDKCVecTempl_CVecTempl_RouteHop {
   LDKCVecTempl_RouteHop *data;
   uintptr_t datalen;
} LDKCVecTempl_CVecTempl_RouteHop;

typedef LDKCVecTempl_CVecTempl_RouteHop LDKCVec_CVec_RouteHopZZ;



/**
 * A channel descriptor which provides a last-hop route to get_route
 */
typedef struct MUST_USE_STRUCT LDKRouteHint {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeRouteHint *inner;
   bool is_owned;
} LDKRouteHint;



/**
 * Fees for routing via a given channel or a node
 */
typedef struct MUST_USE_STRUCT LDKRoutingFees {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeRoutingFees *inner;
   bool is_owned;
} LDKRoutingFees;

typedef union LDKCResultPtr_Route__LightningError {
   LDKRoute *result;
   LDKLightningError *err;
} LDKCResultPtr_Route__LightningError;

typedef struct LDKCResultTempl_Route__LightningError {
   LDKCResultPtr_Route__LightningError contents;
   bool result_ok;
} LDKCResultTempl_Route__LightningError;

typedef LDKCResultTempl_Route__LightningError LDKCResult_RouteLightningErrorZ;



/**
 * Represents the network as nodes and channels between them
 */
typedef struct MUST_USE_STRUCT LDKNetworkGraph {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeNetworkGraph *inner;
   bool is_owned;
} LDKNetworkGraph;

typedef struct LDKCVecTempl_RouteHint {
   LDKRouteHint *data;
   uintptr_t datalen;
} LDKCVecTempl_RouteHint;

typedef LDKCVecTempl_RouteHint LDKCVec_RouteHintZ;



/**
 * A simple newtype for RwLockReadGuard<'a, NetworkGraph>.
 * This exists only to make accessing a RwLock<NetworkGraph> possible from
 * the C bindings, as it can be done directly in Rust code.
 */
typedef struct MUST_USE_STRUCT LDKLockedNetworkGraph {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeLockedNetworkGraph *inner;
   bool is_owned;
} LDKLockedNetworkGraph;



/**
 * Receives and validates network updates from peers,
 * stores authentic and relevant data as a network graph.
 * This network graph is then used for routing payments.
 * Provides interface to help with initial routing sync by
 * serving historical announcements.
 */
typedef struct MUST_USE_STRUCT LDKNetGraphMsgHandler {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeNetGraphMsgHandler *inner;
   bool is_owned;
} LDKNetGraphMsgHandler;



/**
 * Details about one direction of a channel. Received
 * within a channel update.
 */
typedef struct MUST_USE_STRUCT LDKDirectionalChannelInfo {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeDirectionalChannelInfo *inner;
   bool is_owned;
} LDKDirectionalChannelInfo;



/**
 * Details about a channel (both directions).
 * Received within a channel announcement.
 */
typedef struct MUST_USE_STRUCT LDKChannelInfo {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeChannelInfo *inner;
   bool is_owned;
} LDKChannelInfo;



/**
 * Information received in the latest node_announcement from this node.
 */
typedef struct MUST_USE_STRUCT LDKNodeAnnouncementInfo {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeNodeAnnouncementInfo *inner;
   bool is_owned;
} LDKNodeAnnouncementInfo;



/**
 * Details about a node in the network, known from the network announcement.
 */
typedef struct MUST_USE_STRUCT LDKNodeInfo {
   /**
    * Nearly everyhwere, inner must be non-null, however in places where
    * the Rust equivalent takes an Option, it may be set to null to indicate None.
    */
   LDKnativeNodeInfo *inner;
   bool is_owned;
} LDKNodeInfo;

typedef LDKCVecTempl_RouteHop LDKCVec_RouteHopZ;

extern const void (*C2Tuple_HTLCOutputInCommitmentSignatureZ_free)(LDKC2Tuple_HTLCOutputInCommitmentSignatureZ);

extern const void (*C2Tuple_OutPointScriptZ_free)(LDKC2Tuple_OutPointScriptZ);

extern const void (*C2Tuple_SignatureCVec_SignatureZZ_free)(LDKC2Tuple_SignatureCVec_SignatureZZ);

extern const void (*C2Tuple_TxidCVec_TxOutZZ_free)(LDKC2Tuple_TxidCVec_TxOutZZ);

extern const void (*C2Tuple_u64u64Z_free)(LDKC2Tuple_u64u64Z);

extern const void (*C2Tuple_usizeTransactionZ_free)(LDKC2Tuple_usizeTransactionZ);

extern const void (*C3Tuple_ChannelAnnouncementChannelUpdateChannelUpdateZ_free)(LDKC3Tuple_ChannelAnnouncementChannelUpdateChannelUpdateZ);

extern const void (*CResult_C2Tuple_SignatureCVec_SignatureZZNoneZ_free)(LDKCResult_C2Tuple_SignatureCVec_SignatureZZNoneZ);

extern const LDKCResult_C2Tuple_SignatureCVec_SignatureZZNoneZ (*CResult_C2Tuple_SignatureCVec_SignatureZZNoneZ_ok)(LDKC2Tuple_SignatureCVec_SignatureZZ);

extern const void (*CResult_CVec_SignatureZNoneZ_free)(LDKCResult_CVec_SignatureZNoneZ);

extern const LDKCResult_CVec_SignatureZNoneZ (*CResult_CVec_SignatureZNoneZ_ok)(LDKCVec_SignatureZ);

extern const LDKCResult_CVec_u8ZPeerHandleErrorZ (*CResult_CVec_u8ZPeerHandleErrorZ_err)(LDKPeerHandleError);

extern const void (*CResult_CVec_u8ZPeerHandleErrorZ_free)(LDKCResult_CVec_u8ZPeerHandleErrorZ);

extern const LDKCResult_CVec_u8ZPeerHandleErrorZ (*CResult_CVec_u8ZPeerHandleErrorZ_ok)(LDKCVec_u8Z);

extern const LDKCResult_NoneAPIErrorZ (*CResult_NoneAPIErrorZ_err)(LDKAPIError);

extern const void (*CResult_NoneAPIErrorZ_free)(LDKCResult_NoneAPIErrorZ);

extern const LDKCResult_NoneChannelMonitorUpdateErrZ (*CResult_NoneChannelMonitorUpdateErrZ_err)(LDKChannelMonitorUpdateErr);

extern const void (*CResult_NoneChannelMonitorUpdateErrZ_free)(LDKCResult_NoneChannelMonitorUpdateErrZ);

extern const LDKCResult_NoneMonitorUpdateErrorZ (*CResult_NoneMonitorUpdateErrorZ_err)(LDKMonitorUpdateError);

extern const void (*CResult_NoneMonitorUpdateErrorZ_free)(LDKCResult_NoneMonitorUpdateErrorZ);

extern const LDKCResult_NonePaymentSendFailureZ (*CResult_NonePaymentSendFailureZ_err)(LDKPaymentSendFailure);

extern const void (*CResult_NonePaymentSendFailureZ_free)(LDKCResult_NonePaymentSendFailureZ);

extern const LDKCResult_NonePeerHandleErrorZ (*CResult_NonePeerHandleErrorZ_err)(LDKPeerHandleError);

extern const void (*CResult_NonePeerHandleErrorZ_free)(LDKCResult_NonePeerHandleErrorZ);

extern const LDKCResult_PublicKeySecpErrorZ (*CResult_PublicKeySecpErrorZ_err)(LDKSecp256k1Error);

extern const void (*CResult_PublicKeySecpErrorZ_free)(LDKCResult_PublicKeySecpErrorZ);

extern const LDKCResult_PublicKeySecpErrorZ (*CResult_PublicKeySecpErrorZ_ok)(LDKPublicKey);

extern const LDKCResult_RouteLightningErrorZ (*CResult_RouteLightningErrorZ_err)(LDKLightningError);

extern const void (*CResult_RouteLightningErrorZ_free)(LDKCResult_RouteLightningErrorZ);

extern const LDKCResult_RouteLightningErrorZ (*CResult_RouteLightningErrorZ_ok)(LDKRoute);

extern const LDKCResult_SecretKeySecpErrorZ (*CResult_SecretKeySecpErrorZ_err)(LDKSecp256k1Error);

extern const void (*CResult_SecretKeySecpErrorZ_free)(LDKCResult_SecretKeySecpErrorZ);

extern const LDKCResult_SecretKeySecpErrorZ (*CResult_SecretKeySecpErrorZ_ok)(LDKSecretKey);

extern const void (*CResult_SignatureNoneZ_free)(LDKCResult_SignatureNoneZ);

extern const LDKCResult_SignatureNoneZ (*CResult_SignatureNoneZ_ok)(LDKSignature);

extern const LDKCResult_TxCreationKeysSecpErrorZ (*CResult_TxCreationKeysSecpErrorZ_err)(LDKSecp256k1Error);

extern const void (*CResult_TxCreationKeysSecpErrorZ_free)(LDKCResult_TxCreationKeysSecpErrorZ);

extern const LDKCResult_TxCreationKeysSecpErrorZ (*CResult_TxCreationKeysSecpErrorZ_ok)(LDKTxCreationKeys);

extern const LDKCResult_TxOutAccessErrorZ (*CResult_TxOutAccessErrorZ_err)(LDKAccessError);

extern const void (*CResult_TxOutAccessErrorZ_free)(LDKCResult_TxOutAccessErrorZ);

extern const LDKCResult_TxOutAccessErrorZ (*CResult_TxOutAccessErrorZ_ok)(LDKTxOut);

extern const LDKCResult_boolLightningErrorZ (*CResult_boolLightningErrorZ_err)(LDKLightningError);

extern const void (*CResult_boolLightningErrorZ_free)(LDKCResult_boolLightningErrorZ);

extern const LDKCResult_boolLightningErrorZ (*CResult_boolLightningErrorZ_ok)(bool);

extern const LDKCResult_boolPeerHandleErrorZ (*CResult_boolPeerHandleErrorZ_err)(LDKPeerHandleError);

extern const void (*CResult_boolPeerHandleErrorZ_free)(LDKCResult_boolPeerHandleErrorZ);

extern const LDKCResult_boolPeerHandleErrorZ (*CResult_boolPeerHandleErrorZ_ok)(bool);

extern const void (*CVec_C2Tuple_HTLCOutputInCommitmentSignatureZZ_free)(LDKCVec_C2Tuple_HTLCOutputInCommitmentSignatureZZ);

extern const void (*CVec_C2Tuple_TxidCVec_TxOutZZZ_free)(LDKCVec_C2Tuple_TxidCVec_TxOutZZZ);

extern const void (*CVec_C2Tuple_usizeTransactionZZ_free)(LDKCVec_C2Tuple_usizeTransactionZZ);

extern const void (*CVec_C3Tuple_ChannelAnnouncementChannelUpdateChannelUpdateZZ_free)(LDKCVec_C3Tuple_ChannelAnnouncementChannelUpdateChannelUpdateZZ);

extern const void (*CVec_CVec_RouteHopZZ_free)(LDKCVec_CVec_RouteHopZZ);

extern const void (*CVec_ChannelDetailsZ_free)(LDKCVec_ChannelDetailsZ);

extern const void (*CVec_ChannelMonitorZ_free)(LDKCVec_ChannelMonitorZ);

extern const void (*CVec_EventZ_free)(LDKCVec_EventZ);

extern const void (*CVec_HTLCOutputInCommitmentZ_free)(LDKCVec_HTLCOutputInCommitmentZ);

extern const void (*CVec_MessageSendEventZ_free)(LDKCVec_MessageSendEventZ);

extern const void (*CVec_MonitorEventZ_free)(LDKCVec_MonitorEventZ);

extern const void (*CVec_NetAddressZ_free)(LDKCVec_NetAddressZ);

extern const void (*CVec_NodeAnnouncementZ_free)(LDKCVec_NodeAnnouncementZ);

extern const void (*CVec_PublicKeyZ_free)(LDKCVec_PublicKeyZ);

extern const void (*CVec_RouteHintZ_free)(LDKCVec_RouteHintZ);

extern const void (*CVec_RouteHopZ_free)(LDKCVec_RouteHopZ);

extern const void (*CVec_SignatureZ_free)(LDKCVec_SignatureZ);

extern const void (*CVec_SpendableOutputDescriptorZ_free)(LDKCVec_SpendableOutputDescriptorZ);

extern const void (*CVec_TransactionZ_free)(LDKCVec_TransactionZ);

extern const void (*CVec_TxOutZ_free)(LDKCVec_TxOutZ);

extern const void (*CVec_UpdateAddHTLCZ_free)(LDKCVec_UpdateAddHTLCZ);

extern const void (*CVec_UpdateFailHTLCZ_free)(LDKCVec_UpdateFailHTLCZ);

extern const void (*CVec_UpdateFailMalformedHTLCZ_free)(LDKCVec_UpdateFailMalformedHTLCZ);

extern const void (*CVec_UpdateFulfillHTLCZ_free)(LDKCVec_UpdateFulfillHTLCZ);

extern const void (*CVec_u64Z_free)(LDKCVec_u64Z);

extern const void (*CVec_u8Z_free)(LDKCVec_u8Z);

extern const uint64_t MIN_RELAY_FEE_SAT_PER_1000_WEIGHT;

void Transaction_free(LDKTransaction _res);

void TxOut_free(LDKTxOut _res);

LDKC2Tuple_usizeTransactionZ C2Tuple_usizeTransactionZ_new(uintptr_t a, LDKTransaction b);

LDKCResult_NoneChannelMonitorUpdateErrZ CResult_NoneChannelMonitorUpdateErrZ_ok(void);

LDKCResult_NoneMonitorUpdateErrorZ CResult_NoneMonitorUpdateErrorZ_ok(void);

LDKC2Tuple_OutPointScriptZ C2Tuple_OutPointScriptZ_new(LDKOutPoint a, LDKCVec_u8Z b);

LDKC2Tuple_TxidCVec_TxOutZZ C2Tuple_TxidCVec_TxOutZZ_new(LDKThirtyTwoBytes a, LDKCVec_TxOutZ b);

LDKC2Tuple_u64u64Z C2Tuple_u64u64Z_new(uint64_t a, uint64_t b);

LDKC2Tuple_SignatureCVec_SignatureZZ C2Tuple_SignatureCVec_SignatureZZ_new(LDKSignature a, LDKCVec_SignatureZ b);

LDKCResult_C2Tuple_SignatureCVec_SignatureZZNoneZ CResult_C2Tuple_SignatureCVec_SignatureZZNoneZ_err(void);

LDKCResult_SignatureNoneZ CResult_SignatureNoneZ_err(void);

LDKCResult_CVec_SignatureZNoneZ CResult_CVec_SignatureZNoneZ_err(void);

LDKCResult_NoneAPIErrorZ CResult_NoneAPIErrorZ_ok(void);

LDKCResult_NonePaymentSendFailureZ CResult_NonePaymentSendFailureZ_ok(void);

LDKC3Tuple_ChannelAnnouncementChannelUpdateChannelUpdateZ C3Tuple_ChannelAnnouncementChannelUpdateChannelUpdateZ_new(LDKChannelAnnouncement a, LDKChannelUpdate b, LDKChannelUpdate c);

LDKCResult_NonePeerHandleErrorZ CResult_NonePeerHandleErrorZ_ok(void);

LDKC2Tuple_HTLCOutputInCommitmentSignatureZ C2Tuple_HTLCOutputInCommitmentSignatureZ_new(LDKHTLCOutputInCommitment a, LDKSignature b);

void Event_free(LDKEvent this_ptr);

void MessageSendEvent_free(LDKMessageSendEvent this_ptr);

/**
 * Calls the free function if one is set
 */
void MessageSendEventsProvider_free(LDKMessageSendEventsProvider this_ptr);

/**
 * Calls the free function if one is set
 */
void EventsProvider_free(LDKEventsProvider this_ptr);

void APIError_free(LDKAPIError this_ptr);

/**
 * Returns the most verbose logging level.
 */
MUST_USE_RES LDKLevel Level_max(void);

/**
 * Calls the free function if one is set
 */
void Logger_free(LDKLogger this_ptr);

void ChannelHandshakeConfig_free(LDKChannelHandshakeConfig this_ptr);

/**
 * Confirmations we will wait for before considering the channel locked in.
 * Applied only for inbound channels (see ChannelHandshakeLimits::max_minimum_depth for the
 * equivalent limit applied to outbound channels).
 *
 * Default value: 6.
 */
uint32_t ChannelHandshakeConfig_get_minimum_depth(const LDKChannelHandshakeConfig *this_ptr);

/**
 * Confirmations we will wait for before considering the channel locked in.
 * Applied only for inbound channels (see ChannelHandshakeLimits::max_minimum_depth for the
 * equivalent limit applied to outbound channels).
 *
 * Default value: 6.
 */
void ChannelHandshakeConfig_set_minimum_depth(LDKChannelHandshakeConfig *this_ptr, uint32_t val);

/**
 * Set to the amount of time we require our counterparty to wait to claim their money.
 *
 * It's one of the main parameter of our security model. We (or one of our watchtowers) MUST
 * be online to check for peer having broadcast a revoked transaction to steal our funds
 * at least once every our_to_self_delay blocks.
 *
 * Meanwhile, asking for a too high delay, we bother peer to freeze funds for nothing in
 * case of an honest unilateral channel close, which implicitly decrease the economic value of
 * our channel.
 *
 * Default value: BREAKDOWN_TIMEOUT (currently 144), we enforce it as a minimum at channel
 * opening so you can tweak config to ask for more security, not less.
 */
uint16_t ChannelHandshakeConfig_get_our_to_self_delay(const LDKChannelHandshakeConfig *this_ptr);

/**
 * Set to the amount of time we require our counterparty to wait to claim their money.
 *
 * It's one of the main parameter of our security model. We (or one of our watchtowers) MUST
 * be online to check for peer having broadcast a revoked transaction to steal our funds
 * at least once every our_to_self_delay blocks.
 *
 * Meanwhile, asking for a too high delay, we bother peer to freeze funds for nothing in
 * case of an honest unilateral channel close, which implicitly decrease the economic value of
 * our channel.
 *
 * Default value: BREAKDOWN_TIMEOUT (currently 144), we enforce it as a minimum at channel
 * opening so you can tweak config to ask for more security, not less.
 */
void ChannelHandshakeConfig_set_our_to_self_delay(LDKChannelHandshakeConfig *this_ptr, uint16_t val);

/**
 * Set to the smallest value HTLC we will accept to process.
 *
 * This value is sent to our counterparty on channel-open and we close the channel any time
 * our counterparty misbehaves by sending us an HTLC with a value smaller than this.
 *
 * Default value: 1. If the value is less than 1, it is ignored and set to 1, as is required
 * by the protocol.
 */
uint64_t ChannelHandshakeConfig_get_our_htlc_minimum_msat(const LDKChannelHandshakeConfig *this_ptr);

/**
 * Set to the smallest value HTLC we will accept to process.
 *
 * This value is sent to our counterparty on channel-open and we close the channel any time
 * our counterparty misbehaves by sending us an HTLC with a value smaller than this.
 *
 * Default value: 1. If the value is less than 1, it is ignored and set to 1, as is required
 * by the protocol.
 */
void ChannelHandshakeConfig_set_our_htlc_minimum_msat(LDKChannelHandshakeConfig *this_ptr, uint64_t val);

MUST_USE_RES LDKChannelHandshakeConfig ChannelHandshakeConfig_new(uint32_t minimum_depth_arg, uint16_t our_to_self_delay_arg, uint64_t our_htlc_minimum_msat_arg);

MUST_USE_RES LDKChannelHandshakeConfig ChannelHandshakeConfig_default(void);

void ChannelHandshakeLimits_free(LDKChannelHandshakeLimits this_ptr);

/**
 * Minimum allowed satoshis when a channel is funded, this is supplied by the sender and so
 * only applies to inbound channels.
 *
 * Default value: 0.
 */
uint64_t ChannelHandshakeLimits_get_min_funding_satoshis(const LDKChannelHandshakeLimits *this_ptr);

/**
 * Minimum allowed satoshis when a channel is funded, this is supplied by the sender and so
 * only applies to inbound channels.
 *
 * Default value: 0.
 */
void ChannelHandshakeLimits_set_min_funding_satoshis(LDKChannelHandshakeLimits *this_ptr, uint64_t val);

/**
 * The remote node sets a limit on the minimum size of HTLCs we can send to them. This allows
 * you to limit the maximum minimum-size they can require.
 *
 * Default value: u64::max_value.
 */
uint64_t ChannelHandshakeLimits_get_max_htlc_minimum_msat(const LDKChannelHandshakeLimits *this_ptr);

/**
 * The remote node sets a limit on the minimum size of HTLCs we can send to them. This allows
 * you to limit the maximum minimum-size they can require.
 *
 * Default value: u64::max_value.
 */
void ChannelHandshakeLimits_set_max_htlc_minimum_msat(LDKChannelHandshakeLimits *this_ptr, uint64_t val);

/**
 * The remote node sets a limit on the maximum value of pending HTLCs to them at any given
 * time to limit their funds exposure to HTLCs. This allows you to set a minimum such value.
 *
 * Default value: 0.
 */
uint64_t ChannelHandshakeLimits_get_min_max_htlc_value_in_flight_msat(const LDKChannelHandshakeLimits *this_ptr);

/**
 * The remote node sets a limit on the maximum value of pending HTLCs to them at any given
 * time to limit their funds exposure to HTLCs. This allows you to set a minimum such value.
 *
 * Default value: 0.
 */
void ChannelHandshakeLimits_set_min_max_htlc_value_in_flight_msat(LDKChannelHandshakeLimits *this_ptr, uint64_t val);

/**
 * The remote node will require we keep a certain amount in direct payment to ourselves at all
 * time, ensuring that we are able to be punished if we broadcast an old state. This allows to
 * you limit the amount which we will have to keep to ourselves (and cannot use for HTLCs).
 *
 * Default value: u64::max_value.
 */
uint64_t ChannelHandshakeLimits_get_max_channel_reserve_satoshis(const LDKChannelHandshakeLimits *this_ptr);

/**
 * The remote node will require we keep a certain amount in direct payment to ourselves at all
 * time, ensuring that we are able to be punished if we broadcast an old state. This allows to
 * you limit the amount which we will have to keep to ourselves (and cannot use for HTLCs).
 *
 * Default value: u64::max_value.
 */
void ChannelHandshakeLimits_set_max_channel_reserve_satoshis(LDKChannelHandshakeLimits *this_ptr, uint64_t val);

/**
 * The remote node sets a limit on the maximum number of pending HTLCs to them at any given
 * time. This allows you to set a minimum such value.
 *
 * Default value: 0.
 */
uint16_t ChannelHandshakeLimits_get_min_max_accepted_htlcs(const LDKChannelHandshakeLimits *this_ptr);

/**
 * The remote node sets a limit on the maximum number of pending HTLCs to them at any given
 * time. This allows you to set a minimum such value.
 *
 * Default value: 0.
 */
void ChannelHandshakeLimits_set_min_max_accepted_htlcs(LDKChannelHandshakeLimits *this_ptr, uint16_t val);

/**
 * Outputs below a certain value will not be added to on-chain transactions. The dust value is
 * required to always be higher than this value so this only applies to HTLC outputs (and
 * potentially to-self outputs before any payments have been made).
 * Thus, HTLCs below this amount plus HTLC transaction fees are not enforceable on-chain.
 * This setting allows you to set a minimum dust limit for their commitment transactions,
 * reflecting the reality that tiny outputs are not considered standard transactions and will
 * not propagate through the Bitcoin network.
 *
 * Default value: 546, the current dust limit on the Bitcoin network.
 */
uint64_t ChannelHandshakeLimits_get_min_dust_limit_satoshis(const LDKChannelHandshakeLimits *this_ptr);

/**
 * Outputs below a certain value will not be added to on-chain transactions. The dust value is
 * required to always be higher than this value so this only applies to HTLC outputs (and
 * potentially to-self outputs before any payments have been made).
 * Thus, HTLCs below this amount plus HTLC transaction fees are not enforceable on-chain.
 * This setting allows you to set a minimum dust limit for their commitment transactions,
 * reflecting the reality that tiny outputs are not considered standard transactions and will
 * not propagate through the Bitcoin network.
 *
 * Default value: 546, the current dust limit on the Bitcoin network.
 */
void ChannelHandshakeLimits_set_min_dust_limit_satoshis(LDKChannelHandshakeLimits *this_ptr, uint64_t val);

/**
 * Maximum allowed threshold above which outputs will not be generated in their commitment
 * transactions.
 * HTLCs below this amount plus HTLC transaction fees are not enforceable on-chain.
 *
 * Default value: u64::max_value.
 */
uint64_t ChannelHandshakeLimits_get_max_dust_limit_satoshis(const LDKChannelHandshakeLimits *this_ptr);

/**
 * Maximum allowed threshold above which outputs will not be generated in their commitment
 * transactions.
 * HTLCs below this amount plus HTLC transaction fees are not enforceable on-chain.
 *
 * Default value: u64::max_value.
 */
void ChannelHandshakeLimits_set_max_dust_limit_satoshis(LDKChannelHandshakeLimits *this_ptr, uint64_t val);

/**
 * Before a channel is usable the funding transaction will need to be confirmed by at least a
 * certain number of blocks, specified by the node which is not the funder (as the funder can
 * assume they aren't going to double-spend themselves).
 * This config allows you to set a limit on the maximum amount of time to wait.
 *
 * Default value: 144, or roughly one day and only applies to outbound channels.
 */
uint32_t ChannelHandshakeLimits_get_max_minimum_depth(const LDKChannelHandshakeLimits *this_ptr);

/**
 * Before a channel is usable the funding transaction will need to be confirmed by at least a
 * certain number of blocks, specified by the node which is not the funder (as the funder can
 * assume they aren't going to double-spend themselves).
 * This config allows you to set a limit on the maximum amount of time to wait.
 *
 * Default value: 144, or roughly one day and only applies to outbound channels.
 */
void ChannelHandshakeLimits_set_max_minimum_depth(LDKChannelHandshakeLimits *this_ptr, uint32_t val);

/**
 * Set to force the incoming channel to match our announced channel preference in
 * ChannelConfig.
 *
 * Default value: true, to make the default that no announced channels are possible (which is
 * appropriate for any nodes which are not online very reliably).
 */
bool ChannelHandshakeLimits_get_force_announced_channel_preference(const LDKChannelHandshakeLimits *this_ptr);

/**
 * Set to force the incoming channel to match our announced channel preference in
 * ChannelConfig.
 *
 * Default value: true, to make the default that no announced channels are possible (which is
 * appropriate for any nodes which are not online very reliably).
 */
void ChannelHandshakeLimits_set_force_announced_channel_preference(LDKChannelHandshakeLimits *this_ptr, bool val);

/**
 * Set to the amount of time we're willing to wait to claim money back to us.
 *
 * Not checking this value would be a security issue, as our peer would be able to set it to
 * max relative lock-time (a year) and we would \"lose\" money as it would be locked for a long time.
 *
 * Default value: MAX_LOCAL_BREAKDOWN_TIMEOUT (1008), which we also enforce as a maximum value
 * so you can tweak config to reduce the loss of having useless locked funds (if your peer accepts)
 */
uint16_t ChannelHandshakeLimits_get_their_to_self_delay(const LDKChannelHandshakeLimits *this_ptr);

/**
 * Set to the amount of time we're willing to wait to claim money back to us.
 *
 * Not checking this value would be a security issue, as our peer would be able to set it to
 * max relative lock-time (a year) and we would \"lose\" money as it would be locked for a long time.
 *
 * Default value: MAX_LOCAL_BREAKDOWN_TIMEOUT (1008), which we also enforce as a maximum value
 * so you can tweak config to reduce the loss of having useless locked funds (if your peer accepts)
 */
void ChannelHandshakeLimits_set_their_to_self_delay(LDKChannelHandshakeLimits *this_ptr, uint16_t val);

MUST_USE_RES LDKChannelHandshakeLimits ChannelHandshakeLimits_new(uint64_t min_funding_satoshis_arg, uint64_t max_htlc_minimum_msat_arg, uint64_t min_max_htlc_value_in_flight_msat_arg, uint64_t max_channel_reserve_satoshis_arg, uint16_t min_max_accepted_htlcs_arg, uint64_t min_dust_limit_satoshis_arg, uint64_t max_dust_limit_satoshis_arg, uint32_t max_minimum_depth_arg, bool force_announced_channel_preference_arg, uint16_t their_to_self_delay_arg);

MUST_USE_RES LDKChannelHandshakeLimits ChannelHandshakeLimits_default(void);

void ChannelConfig_free(LDKChannelConfig this_ptr);

/**
 * Amount (in millionths of a satoshi) the channel will charge per transferred satoshi.
 * This may be allowed to change at runtime in a later update, however doing so must result in
 * update messages sent to notify all nodes of our updated relay fee.
 *
 * Default value: 0.
 */
uint32_t ChannelConfig_get_fee_proportional_millionths(const LDKChannelConfig *this_ptr);

/**
 * Amount (in millionths of a satoshi) the channel will charge per transferred satoshi.
 * This may be allowed to change at runtime in a later update, however doing so must result in
 * update messages sent to notify all nodes of our updated relay fee.
 *
 * Default value: 0.
 */
void ChannelConfig_set_fee_proportional_millionths(LDKChannelConfig *this_ptr, uint32_t val);

/**
 * Set to announce the channel publicly and notify all nodes that they can route via this
 * channel.
 *
 * This should only be set to true for nodes which expect to be online reliably.
 *
 * As the node which funds a channel picks this value this will only apply for new outbound
 * channels unless ChannelHandshakeLimits::force_announced_channel_preferences is set.
 *
 * This cannot be changed after the initial channel handshake.
 *
 * Default value: false.
 */
bool ChannelConfig_get_announced_channel(const LDKChannelConfig *this_ptr);

/**
 * Set to announce the channel publicly and notify all nodes that they can route via this
 * channel.
 *
 * This should only be set to true for nodes which expect to be online reliably.
 *
 * As the node which funds a channel picks this value this will only apply for new outbound
 * channels unless ChannelHandshakeLimits::force_announced_channel_preferences is set.
 *
 * This cannot be changed after the initial channel handshake.
 *
 * Default value: false.
 */
void ChannelConfig_set_announced_channel(LDKChannelConfig *this_ptr, bool val);

/**
 * When set, we commit to an upfront shutdown_pubkey at channel open. If our counterparty
 * supports it, they will then enforce the mutual-close output to us matches what we provided
 * at intialization, preventing us from closing to an alternate pubkey.
 *
 * This is set to true by default to provide a slight increase in security, though ultimately
 * any attacker who is able to take control of a channel can just as easily send the funds via
 * lightning payments, so we never require that our counterparties support this option.
 *
 * This cannot be changed after a channel has been initialized.
 *
 * Default value: true.
 */
bool ChannelConfig_get_commit_upfront_shutdown_pubkey(const LDKChannelConfig *this_ptr);

/**
 * When set, we commit to an upfront shutdown_pubkey at channel open. If our counterparty
 * supports it, they will then enforce the mutual-close output to us matches what we provided
 * at intialization, preventing us from closing to an alternate pubkey.
 *
 * This is set to true by default to provide a slight increase in security, though ultimately
 * any attacker who is able to take control of a channel can just as easily send the funds via
 * lightning payments, so we never require that our counterparties support this option.
 *
 * This cannot be changed after a channel has been initialized.
 *
 * Default value: true.
 */
void ChannelConfig_set_commit_upfront_shutdown_pubkey(LDKChannelConfig *this_ptr, bool val);

MUST_USE_RES LDKChannelConfig ChannelConfig_new(uint32_t fee_proportional_millionths_arg, bool announced_channel_arg, bool commit_upfront_shutdown_pubkey_arg);

MUST_USE_RES LDKChannelConfig ChannelConfig_default(void);

LDKCVec_u8Z ChannelConfig_write(const LDKChannelConfig *obj);

LDKChannelConfig ChannelConfig_read(LDKu8slice ser);

void UserConfig_free(LDKUserConfig this_ptr);

/**
 * Channel config that we propose to our counterparty.
 */
LDKChannelHandshakeConfig UserConfig_get_own_channel_config(const LDKUserConfig *this_ptr);

/**
 * Channel config that we propose to our counterparty.
 */
void UserConfig_set_own_channel_config(LDKUserConfig *this_ptr, LDKChannelHandshakeConfig val);

/**
 * Limits applied to our counterparty's proposed channel config settings.
 */
LDKChannelHandshakeLimits UserConfig_get_peer_channel_config_limits(const LDKUserConfig *this_ptr);

/**
 * Limits applied to our counterparty's proposed channel config settings.
 */
void UserConfig_set_peer_channel_config_limits(LDKUserConfig *this_ptr, LDKChannelHandshakeLimits val);

/**
 * Channel config which affects behavior during channel lifetime.
 */
LDKChannelConfig UserConfig_get_channel_options(const LDKUserConfig *this_ptr);

/**
 * Channel config which affects behavior during channel lifetime.
 */
void UserConfig_set_channel_options(LDKUserConfig *this_ptr, LDKChannelConfig val);

MUST_USE_RES LDKUserConfig UserConfig_new(LDKChannelHandshakeConfig own_channel_config_arg, LDKChannelHandshakeLimits peer_channel_config_limits_arg, LDKChannelConfig channel_options_arg);

MUST_USE_RES LDKUserConfig UserConfig_default(void);

/**
 * Calls the free function if one is set
 */
void Access_free(LDKAccess this_ptr);

/**
 * Calls the free function if one is set
 */
void Watch_free(LDKWatch this_ptr);

/**
 * Calls the free function if one is set
 */
void Filter_free(LDKFilter this_ptr);

/**
 * Calls the free function if one is set
 */
void BroadcasterInterface_free(LDKBroadcasterInterface this_ptr);

/**
 * Calls the free function if one is set
 */
void FeeEstimator_free(LDKFeeEstimator this_ptr);

void ChainMonitor_free(LDKChainMonitor this_ptr);

/**
 * Dispatches to per-channel monitors, which are responsible for updating their on-chain view
 * of a channel and reacting accordingly based on transactions in the connected block. See
 * [`ChannelMonitor::block_connected`] for details. Any HTLCs that were resolved on chain will
 * be returned by [`chain::Watch::release_pending_monitor_events`].
 *
 * Calls back to [`chain::Filter`] if any monitor indicated new outputs to watch. Subsequent
 * calls must not exclude any transactions matching the new outputs nor any in-block
 * descendants of such transactions. It is not necessary to re-fetch the block to obtain
 * updated `txdata`.
 *
 * [`ChannelMonitor::block_connected`]: ../channelmonitor/struct.ChannelMonitor.html#method.block_connected
 * [`chain::Watch::release_pending_monitor_events`]: ../trait.Watch.html#tymethod.release_pending_monitor_events
 * [`chain::Filter`]: ../trait.Filter.html
 */
void ChainMonitor_block_connected(const LDKChainMonitor *this_arg, const uint8_t (*header)[80], LDKCVec_C2Tuple_usizeTransactionZZ txdata, uint32_t height);

/**
 * Dispatches to per-channel monitors, which are responsible for updating their on-chain view
 * of a channel based on the disconnected block. See [`ChannelMonitor::block_disconnected`] for
 * details.
 *
 * [`ChannelMonitor::block_disconnected`]: ../channelmonitor/struct.ChannelMonitor.html#method.block_disconnected
 */
void ChainMonitor_block_disconnected(const LDKChainMonitor *this_arg, const uint8_t (*header)[80], uint32_t disconnected_height);

/**
 * Creates a new `ChainMonitor` used to watch on-chain activity pertaining to channels.
 *
 * When an optional chain source implementing [`chain::Filter`] is provided, the chain monitor
 * will call back to it indicating transactions and outputs of interest. This allows clients to
 * pre-filter blocks or only fetch blocks matching a compact filter. Otherwise, clients may
 * always need to fetch full blocks absent another means for determining which blocks contain
 * transactions relevant to the watched channels.
 *
 * [`chain::Filter`]: ../trait.Filter.html
 */
MUST_USE_RES LDKChainMonitor ChainMonitor_new(LDKFilter *chain_source, LDKBroadcasterInterface broadcaster, LDKLogger logger, LDKFeeEstimator feeest);

LDKWatch ChainMonitor_as_Watch(const LDKChainMonitor *this_arg);

LDKEventsProvider ChainMonitor_as_EventsProvider(const LDKChainMonitor *this_arg);

void ChannelMonitorUpdate_free(LDKChannelMonitorUpdate this_ptr);

/**
 * The sequence number of this update. Updates *must* be replayed in-order according to this
 * sequence number (and updates may panic if they are not). The update_id values are strictly
 * increasing and increase by one for each new update.
 *
 * This sequence number is also used to track up to which points updates which returned
 * ChannelMonitorUpdateErr::TemporaryFailure have been applied to all copies of a given
 * ChannelMonitor when ChannelManager::channel_monitor_updated is called.
 */
uint64_t ChannelMonitorUpdate_get_update_id(const LDKChannelMonitorUpdate *this_ptr);

/**
 * The sequence number of this update. Updates *must* be replayed in-order according to this
 * sequence number (and updates may panic if they are not). The update_id values are strictly
 * increasing and increase by one for each new update.
 *
 * This sequence number is also used to track up to which points updates which returned
 * ChannelMonitorUpdateErr::TemporaryFailure have been applied to all copies of a given
 * ChannelMonitor when ChannelManager::channel_monitor_updated is called.
 */
void ChannelMonitorUpdate_set_update_id(LDKChannelMonitorUpdate *this_ptr, uint64_t val);

LDKCVec_u8Z ChannelMonitorUpdate_write(const LDKChannelMonitorUpdate *obj);

LDKChannelMonitorUpdate ChannelMonitorUpdate_read(LDKu8slice ser);

void MonitorUpdateError_free(LDKMonitorUpdateError this_ptr);

void MonitorEvent_free(LDKMonitorEvent this_ptr);

void HTLCUpdate_free(LDKHTLCUpdate this_ptr);

LDKCVec_u8Z HTLCUpdate_write(const LDKHTLCUpdate *obj);

LDKHTLCUpdate HTLCUpdate_read(LDKu8slice ser);

void ChannelMonitor_free(LDKChannelMonitor this_ptr);

/**
 * Updates a ChannelMonitor on the basis of some new information provided by the Channel
 * itself.
 *
 * panics if the given update is not the next update by update_id.
 */
MUST_USE_RES LDKCResult_NoneMonitorUpdateErrorZ ChannelMonitor_update_monitor(LDKChannelMonitor *this_arg, LDKChannelMonitorUpdate updates, const LDKBroadcasterInterface *broadcaster, const LDKLogger *logger);

/**
 * Gets the update_id from the latest ChannelMonitorUpdate which was applied to this
 * ChannelMonitor.
 */
MUST_USE_RES uint64_t ChannelMonitor_get_latest_update_id(const LDKChannelMonitor *this_arg);

/**
 * Gets the funding transaction outpoint of the channel this ChannelMonitor is monitoring for.
 */
MUST_USE_RES LDKC2Tuple_OutPointScriptZ ChannelMonitor_get_funding_txo(const LDKChannelMonitor *this_arg);

/**
 * Get the list of HTLCs who's status has been updated on chain. This should be called by
 * ChannelManager via [`chain::Watch::release_pending_monitor_events`].
 *
 * [`chain::Watch::release_pending_monitor_events`]: ../trait.Watch.html#tymethod.release_pending_monitor_events
 */
MUST_USE_RES LDKCVec_MonitorEventZ ChannelMonitor_get_and_clear_pending_monitor_events(LDKChannelMonitor *this_arg);

/**
 * Gets the list of pending events which were generated by previous actions, clearing the list
 * in the process.
 *
 * This is called by ChainMonitor::get_and_clear_pending_events() and is equivalent to
 * EventsProvider::get_and_clear_pending_events() except that it requires &mut self as we do
 * no internal locking in ChannelMonitors.
 */
MUST_USE_RES LDKCVec_EventZ ChannelMonitor_get_and_clear_pending_events(LDKChannelMonitor *this_arg);

/**
 * Used by ChannelManager deserialization to broadcast the latest holder state if its copy of
 * the Channel was out-of-date. You may use it to get a broadcastable holder toxic tx in case of
 * fallen-behind, i.e when receiving a channel_reestablish with a proof that our counterparty side knows
 * a higher revocation secret than the holder commitment number we are aware of. Broadcasting these
 * transactions are UNSAFE, as they allow counterparty side to punish you. Nevertheless you may want to
 * broadcast them if counterparty don't close channel with his higher commitment transaction after a
 * substantial amount of time (a month or even a year) to get back funds. Best may be to contact
 * out-of-band the other node operator to coordinate with him if option is available to you.
 * In any-case, choice is up to the user.
 */
MUST_USE_RES LDKCVec_TransactionZ ChannelMonitor_get_latest_holder_commitment_txn(LDKChannelMonitor *this_arg, const LDKLogger *logger);

/**
 * Processes transactions in a newly connected block, which may result in any of the following:
 * - update the monitor's state against resolved HTLCs
 * - punish the counterparty in the case of seeing a revoked commitment transaction
 * - force close the channel and claim/timeout incoming/outgoing HTLCs if near expiration
 * - detect settled outputs for later spending
 * - schedule and bump any in-flight claims
 *
 * Returns any new outputs to watch from `txdata`; after called, these are also included in
 * [`get_outputs_to_watch`].
 *
 * [`get_outputs_to_watch`]: #method.get_outputs_to_watch
 */
MUST_USE_RES LDKCVec_C2Tuple_TxidCVec_TxOutZZZ ChannelMonitor_block_connected(LDKChannelMonitor *this_arg, const uint8_t (*header)[80], LDKCVec_C2Tuple_usizeTransactionZZ txdata, uint32_t height, LDKBroadcasterInterface broadcaster, LDKFeeEstimator fee_estimator, LDKLogger logger);

/**
 * Determines if the disconnected block contained any transactions of interest and updates
 * appropriately.
 */
void ChannelMonitor_block_disconnected(LDKChannelMonitor *this_arg, const uint8_t (*header)[80], uint32_t height, LDKBroadcasterInterface broadcaster, LDKFeeEstimator fee_estimator, LDKLogger logger);

void OutPoint_free(LDKOutPoint this_ptr);

/**
 * The referenced transaction's txid.
 */
const uint8_t (*OutPoint_get_txid(const LDKOutPoint *this_ptr))[32];

/**
 * The referenced transaction's txid.
 */
void OutPoint_set_txid(LDKOutPoint *this_ptr, LDKThirtyTwoBytes val);

/**
 * The index of the referenced output in its transaction's vout.
 */
uint16_t OutPoint_get_index(const LDKOutPoint *this_ptr);

/**
 * The index of the referenced output in its transaction's vout.
 */
void OutPoint_set_index(LDKOutPoint *this_ptr, uint16_t val);

MUST_USE_RES LDKOutPoint OutPoint_new(LDKThirtyTwoBytes txid_arg, uint16_t index_arg);

/**
 * Convert an `OutPoint` to a lightning channel id.
 */
MUST_USE_RES LDKThirtyTwoBytes OutPoint_to_channel_id(const LDKOutPoint *this_arg);

LDKCVec_u8Z OutPoint_write(const LDKOutPoint *obj);

LDKOutPoint OutPoint_read(LDKu8slice ser);

void SpendableOutputDescriptor_free(LDKSpendableOutputDescriptor this_ptr);

/**
 * Calls the free function if one is set
 */
void ChannelKeys_free(LDKChannelKeys this_ptr);

/**
 * Calls the free function if one is set
 */
void KeysInterface_free(LDKKeysInterface this_ptr);

void InMemoryChannelKeys_free(LDKInMemoryChannelKeys this_ptr);

/**
 * Private key of anchor tx
 */
const uint8_t (*InMemoryChannelKeys_get_funding_key(const LDKInMemoryChannelKeys *this_ptr))[32];

/**
 * Private key of anchor tx
 */
void InMemoryChannelKeys_set_funding_key(LDKInMemoryChannelKeys *this_ptr, LDKSecretKey val);

/**
 * Holder secret key for blinded revocation pubkey
 */
const uint8_t (*InMemoryChannelKeys_get_revocation_base_key(const LDKInMemoryChannelKeys *this_ptr))[32];

/**
 * Holder secret key for blinded revocation pubkey
 */
void InMemoryChannelKeys_set_revocation_base_key(LDKInMemoryChannelKeys *this_ptr, LDKSecretKey val);

/**
 * Holder secret key used for our balance in counterparty-broadcasted commitment transactions
 */
const uint8_t (*InMemoryChannelKeys_get_payment_key(const LDKInMemoryChannelKeys *this_ptr))[32];

/**
 * Holder secret key used for our balance in counterparty-broadcasted commitment transactions
 */
void InMemoryChannelKeys_set_payment_key(LDKInMemoryChannelKeys *this_ptr, LDKSecretKey val);

/**
 * Holder secret key used in HTLC tx
 */
const uint8_t (*InMemoryChannelKeys_get_delayed_payment_base_key(const LDKInMemoryChannelKeys *this_ptr))[32];

/**
 * Holder secret key used in HTLC tx
 */
void InMemoryChannelKeys_set_delayed_payment_base_key(LDKInMemoryChannelKeys *this_ptr, LDKSecretKey val);

/**
 * Holder htlc secret key used in commitment tx htlc outputs
 */
const uint8_t (*InMemoryChannelKeys_get_htlc_base_key(const LDKInMemoryChannelKeys *this_ptr))[32];

/**
 * Holder htlc secret key used in commitment tx htlc outputs
 */
void InMemoryChannelKeys_set_htlc_base_key(LDKInMemoryChannelKeys *this_ptr, LDKSecretKey val);

/**
 * Commitment seed
 */
const uint8_t (*InMemoryChannelKeys_get_commitment_seed(const LDKInMemoryChannelKeys *this_ptr))[32];

/**
 * Commitment seed
 */
void InMemoryChannelKeys_set_commitment_seed(LDKInMemoryChannelKeys *this_ptr, LDKThirtyTwoBytes val);

/**
 * Create a new InMemoryChannelKeys
 */
MUST_USE_RES LDKInMemoryChannelKeys InMemoryChannelKeys_new(LDKSecretKey funding_key, LDKSecretKey revocation_base_key, LDKSecretKey payment_key, LDKSecretKey delayed_payment_base_key, LDKSecretKey htlc_base_key, LDKThirtyTwoBytes commitment_seed, uint64_t channel_value_satoshis, LDKC2Tuple_u64u64Z key_derivation_params);

/**
 * Counterparty pubkeys.
 * Will panic if on_accept wasn't called.
 */
MUST_USE_RES LDKChannelPublicKeys InMemoryChannelKeys_counterparty_pubkeys(const LDKInMemoryChannelKeys *this_arg);

/**
 * The contest_delay value specified by our counterparty and applied on holder-broadcastable
 * transactions, ie the amount of time that we have to wait to recover our funds if we
 * broadcast a transaction. You'll likely want to pass this to the
 * ln::chan_utils::build*_transaction functions when signing holder's transactions.
 * Will panic if on_accept wasn't called.
 */
MUST_USE_RES uint16_t InMemoryChannelKeys_counterparty_selected_contest_delay(const LDKInMemoryChannelKeys *this_arg);

/**
 * The contest_delay value specified by us and applied on transactions broadcastable
 * by our counterparty, ie the amount of time that they have to wait to recover their funds
 * if they broadcast a transaction.
 * Will panic if on_accept wasn't called.
 */
MUST_USE_RES uint16_t InMemoryChannelKeys_holder_selected_contest_delay(const LDKInMemoryChannelKeys *this_arg);

LDKChannelKeys InMemoryChannelKeys_as_ChannelKeys(const LDKInMemoryChannelKeys *this_arg);

LDKCVec_u8Z InMemoryChannelKeys_write(const LDKInMemoryChannelKeys *obj);

LDKInMemoryChannelKeys InMemoryChannelKeys_read(LDKu8slice ser);

void KeysManager_free(LDKKeysManager this_ptr);

/**
 * Constructs a KeysManager from a 32-byte seed. If the seed is in some way biased (eg your
 * CSRNG is busted) this may panic (but more importantly, you will possibly lose funds).
 * starting_time isn't strictly required to actually be a time, but it must absolutely,
 * without a doubt, be unique to this instance. ie if you start multiple times with the same
 * seed, starting_time must be unique to each run. Thus, the easiest way to achieve this is to
 * simply use the current time (with very high precision).
 *
 * The seed MUST be backed up safely prior to use so that the keys can be re-created, however,
 * obviously, starting_time should be unique every time you reload the library - it is only
 * used to generate new ephemeral key data (which will be stored by the individual channel if
 * necessary).
 *
 * Note that the seed is required to recover certain on-chain funds independent of
 * ChannelMonitor data, though a current copy of ChannelMonitor data is also required for any
 * channel, and some on-chain during-closing funds.
 *
 * Note that until the 0.1 release there is no guarantee of backward compatibility between
 * versions. Once the library is more fully supported, the docs will be updated to include a
 * detailed description of the guarantee.
 */
MUST_USE_RES LDKKeysManager KeysManager_new(const uint8_t (*seed)[32], LDKNetwork network, uint64_t starting_time_secs, uint32_t starting_time_nanos);

/**
 * Derive an old set of ChannelKeys for per-channel secrets based on a key derivation
 * parameters.
 * Key derivation parameters are accessible through a per-channel secrets
 * ChannelKeys::key_derivation_params and is provided inside DynamicOuputP2WSH in case of
 * onchain output detection for which a corresponding delayed_payment_key must be derived.
 */
MUST_USE_RES LDKInMemoryChannelKeys KeysManager_derive_channel_keys(const LDKKeysManager *this_arg, uint64_t channel_value_satoshis, uint64_t params_1, uint64_t params_2);

LDKKeysInterface KeysManager_as_KeysInterface(const LDKKeysManager *this_arg);

void ChannelManager_free(LDKChannelManager this_ptr);

void ChannelDetails_free(LDKChannelDetails this_ptr);

/**
 * The channel's ID (prior to funding transaction generation, this is a random 32 bytes,
 * thereafter this is the txid of the funding transaction xor the funding transaction output).
 * Note that this means this value is *not* persistent - it can change once during the
 * lifetime of the channel.
 */
const uint8_t (*ChannelDetails_get_channel_id(const LDKChannelDetails *this_ptr))[32];

/**
 * The channel's ID (prior to funding transaction generation, this is a random 32 bytes,
 * thereafter this is the txid of the funding transaction xor the funding transaction output).
 * Note that this means this value is *not* persistent - it can change once during the
 * lifetime of the channel.
 */
void ChannelDetails_set_channel_id(LDKChannelDetails *this_ptr, LDKThirtyTwoBytes val);

/**
 * The node_id of our counterparty
 */
LDKPublicKey ChannelDetails_get_remote_network_id(const LDKChannelDetails *this_ptr);

/**
 * The node_id of our counterparty
 */
void ChannelDetails_set_remote_network_id(LDKChannelDetails *this_ptr, LDKPublicKey val);

/**
 * The Features the channel counterparty provided upon last connection.
 * Useful for routing as it is the most up-to-date copy of the counterparty's features and
 * many routing-relevant features are present in the init context.
 */
LDKInitFeatures ChannelDetails_get_counterparty_features(const LDKChannelDetails *this_ptr);

/**
 * The Features the channel counterparty provided upon last connection.
 * Useful for routing as it is the most up-to-date copy of the counterparty's features and
 * many routing-relevant features are present in the init context.
 */
void ChannelDetails_set_counterparty_features(LDKChannelDetails *this_ptr, LDKInitFeatures val);

/**
 * The value, in satoshis, of this channel as appears in the funding output
 */
uint64_t ChannelDetails_get_channel_value_satoshis(const LDKChannelDetails *this_ptr);

/**
 * The value, in satoshis, of this channel as appears in the funding output
 */
void ChannelDetails_set_channel_value_satoshis(LDKChannelDetails *this_ptr, uint64_t val);

/**
 * The user_id passed in to create_channel, or 0 if the channel was inbound.
 */
uint64_t ChannelDetails_get_user_id(const LDKChannelDetails *this_ptr);

/**
 * The user_id passed in to create_channel, or 0 if the channel was inbound.
 */
void ChannelDetails_set_user_id(LDKChannelDetails *this_ptr, uint64_t val);

/**
 * The available outbound capacity for sending HTLCs to the remote peer. This does not include
 * any pending HTLCs which are not yet fully resolved (and, thus, who's balance is not
 * available for inclusion in new outbound HTLCs). This further does not include any pending
 * outgoing HTLCs which are awaiting some other resolution to be sent.
 */
uint64_t ChannelDetails_get_outbound_capacity_msat(const LDKChannelDetails *this_ptr);

/**
 * The available outbound capacity for sending HTLCs to the remote peer. This does not include
 * any pending HTLCs which are not yet fully resolved (and, thus, who's balance is not
 * available for inclusion in new outbound HTLCs). This further does not include any pending
 * outgoing HTLCs which are awaiting some other resolution to be sent.
 */
void ChannelDetails_set_outbound_capacity_msat(LDKChannelDetails *this_ptr, uint64_t val);

/**
 * The available inbound capacity for the remote peer to send HTLCs to us. This does not
 * include any pending HTLCs which are not yet fully resolved (and, thus, who's balance is not
 * available for inclusion in new inbound HTLCs).
 * Note that there are some corner cases not fully handled here, so the actual available
 * inbound capacity may be slightly higher than this.
 */
uint64_t ChannelDetails_get_inbound_capacity_msat(const LDKChannelDetails *this_ptr);

/**
 * The available inbound capacity for the remote peer to send HTLCs to us. This does not
 * include any pending HTLCs which are not yet fully resolved (and, thus, who's balance is not
 * available for inclusion in new inbound HTLCs).
 * Note that there are some corner cases not fully handled here, so the actual available
 * inbound capacity may be slightly higher than this.
 */
void ChannelDetails_set_inbound_capacity_msat(LDKChannelDetails *this_ptr, uint64_t val);

/**
 * True if the channel is (a) confirmed and funding_locked messages have been exchanged, (b)
 * the peer is connected, and (c) no monitor update failure is pending resolution.
 */
bool ChannelDetails_get_is_live(const LDKChannelDetails *this_ptr);

/**
 * True if the channel is (a) confirmed and funding_locked messages have been exchanged, (b)
 * the peer is connected, and (c) no monitor update failure is pending resolution.
 */
void ChannelDetails_set_is_live(LDKChannelDetails *this_ptr, bool val);

void PaymentSendFailure_free(LDKPaymentSendFailure this_ptr);

/**
 * Constructs a new ChannelManager to hold several channels and route between them.
 *
 * This is the main \"logic hub\" for all channel-related actions, and implements
 * ChannelMessageHandler.
 *
 * Non-proportional fees are fixed according to our risk using the provided fee estimator.
 *
 * panics if channel_value_satoshis is >= `MAX_FUNDING_SATOSHIS`!
 *
 * Users must provide the current blockchain height from which to track onchain channel
 * funding outpoints and send payments with reliable timelocks.
 *
 * Users need to notify the new ChannelManager when a new block is connected or
 * disconnected using its `block_connected` and `block_disconnected` methods.
 */
MUST_USE_RES LDKChannelManager ChannelManager_new(LDKNetwork network, LDKFeeEstimator fee_est, LDKWatch chain_monitor, LDKBroadcasterInterface tx_broadcaster, LDKLogger logger, LDKKeysInterface keys_manager, LDKUserConfig config, uintptr_t current_blockchain_height);

/**
 * Creates a new outbound channel to the given remote node and with the given value.
 *
 * user_id will be provided back as user_channel_id in FundingGenerationReady and
 * FundingBroadcastSafe events to allow tracking of which events correspond with which
 * create_channel call. Note that user_channel_id defaults to 0 for inbound channels, so you
 * may wish to avoid using 0 for user_id here.
 *
 * If successful, will generate a SendOpenChannel message event, so you should probably poll
 * PeerManager::process_events afterwards.
 *
 * Raises APIError::APIMisuseError when channel_value_satoshis > 2**24 or push_msat is
 * greater than channel_value_satoshis * 1k or channel_value_satoshis is < 1000.
 */
MUST_USE_RES LDKCResult_NoneAPIErrorZ ChannelManager_create_channel(const LDKChannelManager *this_arg, LDKPublicKey their_network_key, uint64_t channel_value_satoshis, uint64_t push_msat, uint64_t user_id, LDKUserConfig override_config);

/**
 * Gets the list of open channels, in random order. See ChannelDetail field documentation for
 * more information.
 */
MUST_USE_RES LDKCVec_ChannelDetailsZ ChannelManager_list_channels(const LDKChannelManager *this_arg);

/**
 * Gets the list of usable channels, in random order. Useful as an argument to
 * get_route to ensure non-announced channels are used.
 *
 * These are guaranteed to have their is_live value set to true, see the documentation for
 * ChannelDetails::is_live for more info on exactly what the criteria are.
 */
MUST_USE_RES LDKCVec_ChannelDetailsZ ChannelManager_list_usable_channels(const LDKChannelManager *this_arg);

/**
 * Begins the process of closing a channel. After this call (plus some timeout), no new HTLCs
 * will be accepted on the given channel, and after additional timeout/the closing of all
 * pending HTLCs, the channel will be closed on chain.
 *
 * May generate a SendShutdown message event on success, which should be relayed.
 */
MUST_USE_RES LDKCResult_NoneAPIErrorZ ChannelManager_close_channel(const LDKChannelManager *this_arg, const uint8_t (*channel_id)[32]);

/**
 * Force closes a channel, immediately broadcasting the latest local commitment transaction to
 * the chain and rejecting new HTLCs on the given channel.
 */
void ChannelManager_force_close_channel(const LDKChannelManager *this_arg, const uint8_t (*channel_id)[32]);

/**
 * Force close all channels, immediately broadcasting the latest local commitment transaction
 * for each to the chain and rejecting new HTLCs on each.
 */
void ChannelManager_force_close_all_channels(const LDKChannelManager *this_arg);

/**
 * Sends a payment along a given route.
 *
 * Value parameters are provided via the last hop in route, see documentation for RouteHop
 * fields for more info.
 *
 * Note that if the payment_hash already exists elsewhere (eg you're sending a duplicative
 * payment), we don't do anything to stop you! We always try to ensure that if the provided
 * next hop knows the preimage to payment_hash they can claim an additional amount as
 * specified in the last hop in the route! Thus, you should probably do your own
 * payment_preimage tracking (which you should already be doing as they represent \"proof of
 * payment\") and prevent double-sends yourself.
 *
 * May generate SendHTLCs message(s) event on success, which should be relayed.
 *
 * Each path may have a different return value, and PaymentSendValue may return a Vec with
 * each entry matching the corresponding-index entry in the route paths, see
 * PaymentSendFailure for more info.
 *
 * In general, a path may raise:
 *  * APIError::RouteError when an invalid route or forwarding parameter (cltv_delta, fee,
 *    node public key) is specified.
 *  * APIError::ChannelUnavailable if the next-hop channel is not available for updates
 *    (including due to previous monitor update failure or new permanent monitor update
 *    failure).
 *  * APIError::MonitorUpdateFailed if a new monitor update failure prevented sending the
 *    relevant updates.
 *
 * Note that depending on the type of the PaymentSendFailure the HTLC may have been
 * irrevocably committed to on our end. In such a case, do NOT retry the payment with a
 * different route unless you intend to pay twice!
 *
 * payment_secret is unrelated to payment_hash (or PaymentPreimage) and exists to authenticate
 * the sender to the recipient and prevent payment-probing (deanonymization) attacks. For
 * newer nodes, it will be provided to you in the invoice. If you do not have one, the Route
 * must not contain multiple paths as multi-path payments require a recipient-provided
 * payment_secret.
 * If a payment_secret *is* provided, we assume that the invoice had the payment_secret feature
 * bit set (either as required or as available). If multiple paths are present in the Route,
 * we assume the invoice had the basic_mpp feature set.
 */
MUST_USE_RES LDKCResult_NonePaymentSendFailureZ ChannelManager_send_payment(const LDKChannelManager *this_arg, const LDKRoute *route, LDKThirtyTwoBytes payment_hash, LDKThirtyTwoBytes payment_secret);

/**
 * Call this upon creation of a funding transaction for the given channel.
 *
 * Note that ALL inputs in the transaction pointed to by funding_txo MUST spend SegWit outputs
 * or your counterparty can steal your funds!
 *
 * Panics if a funding transaction has already been provided for this channel.
 *
 * May panic if the funding_txo is duplicative with some other channel (note that this should
 * be trivially prevented by using unique funding transaction keys per-channel).
 */
void ChannelManager_funding_transaction_generated(const LDKChannelManager *this_arg, const uint8_t (*temporary_channel_id)[32], LDKOutPoint funding_txo);

/**
 * Generates a signed node_announcement from the given arguments and creates a
 * BroadcastNodeAnnouncement event. Note that such messages will be ignored unless peers have
 * seen a channel_announcement from us (ie unless we have public channels open).
 *
 * RGB is a node \"color\" and alias is a printable human-readable string to describe this node
 * to humans. They carry no in-protocol meaning.
 *
 * addresses represent the set (possibly empty) of socket addresses on which this node accepts
 * incoming connections. These will be broadcast to the network, publicly tying these
 * addresses together. If you wish to preserve user privacy, addresses should likely contain
 * only Tor Onion addresses.
 *
 * Panics if addresses is absurdly large (more than 500).
 */
void ChannelManager_broadcast_node_announcement(const LDKChannelManager *this_arg, LDKThreeBytes rgb, LDKThirtyTwoBytes alias, LDKCVec_NetAddressZ addresses);

/**
 * Processes HTLCs which are pending waiting on random forward delay.
 *
 * Should only really ever be called in response to a PendingHTLCsForwardable event.
 * Will likely generate further events.
 */
void ChannelManager_process_pending_htlc_forwards(const LDKChannelManager *this_arg);

/**
 * If a peer is disconnected we mark any channels with that peer as 'disabled'.
 * After some time, if channels are still disabled we need to broadcast a ChannelUpdate
 * to inform the network about the uselessness of these channels.
 *
 * This method handles all the details, and must be called roughly once per minute.
 */
void ChannelManager_timer_chan_freshness_every_min(const LDKChannelManager *this_arg);

/**
 * Indicates that the preimage for payment_hash is unknown or the received amount is incorrect
 * after a PaymentReceived event, failing the HTLC back to its origin and freeing resources
 * along the path (including in our own channel on which we received it).
 * Returns false if no payment was found to fail backwards, true if the process of failing the
 * HTLC backwards has been started.
 */
MUST_USE_RES bool ChannelManager_fail_htlc_backwards(const LDKChannelManager *this_arg, const uint8_t (*payment_hash)[32], LDKThirtyTwoBytes payment_secret);

/**
 * Provides a payment preimage in response to a PaymentReceived event, returning true and
 * generating message events for the net layer to claim the payment, if possible. Thus, you
 * should probably kick the net layer to go send messages if this returns true!
 *
 * You must specify the expected amounts for this HTLC, and we will only claim HTLCs
 * available within a few percent of the expected amount. This is critical for several
 * reasons : a) it avoids providing senders with `proof-of-payment` (in the form of the
 * payment_preimage without having provided the full value and b) it avoids certain
 * privacy-breaking recipient-probing attacks which may reveal payment activity to
 * motivated attackers.
 *
 * Note that the privacy concerns in (b) are not relevant in payments with a payment_secret
 * set. Thus, for such payments we will claim any payments which do not under-pay.
 *
 * May panic if called except in response to a PaymentReceived event.
 */
MUST_USE_RES bool ChannelManager_claim_funds(const LDKChannelManager *this_arg, LDKThirtyTwoBytes payment_preimage, LDKThirtyTwoBytes payment_secret, uint64_t expected_amount);

/**
 * Gets the node_id held by this ChannelManager
 */
MUST_USE_RES LDKPublicKey ChannelManager_get_our_node_id(const LDKChannelManager *this_arg);

/**
 * Restores a single, given channel to normal operation after a
 * ChannelMonitorUpdateErr::TemporaryFailure was returned from a channel monitor update
 * operation.
 *
 * All ChannelMonitor updates up to and including highest_applied_update_id must have been
 * fully committed in every copy of the given channels' ChannelMonitors.
 *
 * Note that there is no effect to calling with a highest_applied_update_id other than the
 * current latest ChannelMonitorUpdate and one call to this function after multiple
 * ChannelMonitorUpdateErr::TemporaryFailures is fine. The highest_applied_update_id field
 * exists largely only to prevent races between this and concurrent update_monitor calls.
 *
 * Thus, the anticipated use is, at a high level:
 *  1) You register a chain::Watch with this ChannelManager,
 *  2) it stores each update to disk, and begins updating any remote (eg watchtower) copies of
 *     said ChannelMonitors as it can, returning ChannelMonitorUpdateErr::TemporaryFailures
 *     any time it cannot do so instantly,
 *  3) update(s) are applied to each remote copy of a ChannelMonitor,
 *  4) once all remote copies are updated, you call this function with the update_id that
 *     completed, and once it is the latest the Channel will be re-enabled.
 */
void ChannelManager_channel_monitor_updated(const LDKChannelManager *this_arg, const LDKOutPoint *funding_txo, uint64_t highest_applied_update_id);

LDKMessageSendEventsProvider ChannelManager_as_MessageSendEventsProvider(const LDKChannelManager *this_arg);

LDKEventsProvider ChannelManager_as_EventsProvider(const LDKChannelManager *this_arg);

/**
 * Updates channel state based on transactions seen in a connected block.
 */
void ChannelManager_block_connected(const LDKChannelManager *this_arg, const uint8_t (*header)[80], LDKCVec_C2Tuple_usizeTransactionZZ txdata, uint32_t height);

/**
 * Updates channel state based on a disconnected block.
 *
 * If necessary, the channel may be force-closed without letting the counterparty participate
 * in the shutdown.
 */
void ChannelManager_block_disconnected(const LDKChannelManager *this_arg, const uint8_t (*header)[80]);

LDKChannelMessageHandler ChannelManager_as_ChannelMessageHandler(const LDKChannelManager *this_arg);

void ChannelManagerReadArgs_free(LDKChannelManagerReadArgs this_ptr);

/**
 * The keys provider which will give us relevant keys. Some keys will be loaded during
 * deserialization.
 */
const LDKKeysInterface *ChannelManagerReadArgs_get_keys_manager(const LDKChannelManagerReadArgs *this_ptr);

/**
 * The keys provider which will give us relevant keys. Some keys will be loaded during
 * deserialization.
 */
void ChannelManagerReadArgs_set_keys_manager(LDKChannelManagerReadArgs *this_ptr, LDKKeysInterface val);

/**
 * The fee_estimator for use in the ChannelManager in the future.
 *
 * No calls to the FeeEstimator will be made during deserialization.
 */
const LDKFeeEstimator *ChannelManagerReadArgs_get_fee_estimator(const LDKChannelManagerReadArgs *this_ptr);

/**
 * The fee_estimator for use in the ChannelManager in the future.
 *
 * No calls to the FeeEstimator will be made during deserialization.
 */
void ChannelManagerReadArgs_set_fee_estimator(LDKChannelManagerReadArgs *this_ptr, LDKFeeEstimator val);

/**
 * The chain::Watch for use in the ChannelManager in the future.
 *
 * No calls to the chain::Watch will be made during deserialization. It is assumed that
 * you have deserialized ChannelMonitors separately and will add them to your
 * chain::Watch after deserializing this ChannelManager.
 */
const LDKWatch *ChannelManagerReadArgs_get_chain_monitor(const LDKChannelManagerReadArgs *this_ptr);

/**
 * The chain::Watch for use in the ChannelManager in the future.
 *
 * No calls to the chain::Watch will be made during deserialization. It is assumed that
 * you have deserialized ChannelMonitors separately and will add them to your
 * chain::Watch after deserializing this ChannelManager.
 */
void ChannelManagerReadArgs_set_chain_monitor(LDKChannelManagerReadArgs *this_ptr, LDKWatch val);

/**
 * The BroadcasterInterface which will be used in the ChannelManager in the future and may be
 * used to broadcast the latest local commitment transactions of channels which must be
 * force-closed during deserialization.
 */
const LDKBroadcasterInterface *ChannelManagerReadArgs_get_tx_broadcaster(const LDKChannelManagerReadArgs *this_ptr);

/**
 * The BroadcasterInterface which will be used in the ChannelManager in the future and may be
 * used to broadcast the latest local commitment transactions of channels which must be
 * force-closed during deserialization.
 */
void ChannelManagerReadArgs_set_tx_broadcaster(LDKChannelManagerReadArgs *this_ptr, LDKBroadcasterInterface val);

/**
 * The Logger for use in the ChannelManager and which may be used to log information during
 * deserialization.
 */
const LDKLogger *ChannelManagerReadArgs_get_logger(const LDKChannelManagerReadArgs *this_ptr);

/**
 * The Logger for use in the ChannelManager and which may be used to log information during
 * deserialization.
 */
void ChannelManagerReadArgs_set_logger(LDKChannelManagerReadArgs *this_ptr, LDKLogger val);

/**
 * Default settings used for new channels. Any existing channels will continue to use the
 * runtime settings which were stored when the ChannelManager was serialized.
 */
LDKUserConfig ChannelManagerReadArgs_get_default_config(const LDKChannelManagerReadArgs *this_ptr);

/**
 * Default settings used for new channels. Any existing channels will continue to use the
 * runtime settings which were stored when the ChannelManager was serialized.
 */
void ChannelManagerReadArgs_set_default_config(LDKChannelManagerReadArgs *this_ptr, LDKUserConfig val);

/**
 * Simple utility function to create a ChannelManagerReadArgs which creates the monitor
 * HashMap for you. This is primarily useful for C bindings where it is not practical to
 * populate a HashMap directly from C.
 */
MUST_USE_RES LDKChannelManagerReadArgs ChannelManagerReadArgs_new(LDKKeysInterface keys_manager, LDKFeeEstimator fee_estimator, LDKWatch chain_monitor, LDKBroadcasterInterface tx_broadcaster, LDKLogger logger, LDKUserConfig default_config, LDKCVec_ChannelMonitorZ channel_monitors);

void DecodeError_free(LDKDecodeError this_ptr);

void Init_free(LDKInit this_ptr);

void ErrorMessage_free(LDKErrorMessage this_ptr);

/**
 * The channel ID involved in the error
 */
const uint8_t (*ErrorMessage_get_channel_id(const LDKErrorMessage *this_ptr))[32];

/**
 * The channel ID involved in the error
 */
void ErrorMessage_set_channel_id(LDKErrorMessage *this_ptr, LDKThirtyTwoBytes val);

/**
 * A possibly human-readable error description.
 * The string should be sanitized before it is used (e.g. emitted to logs
 * or printed to stdout).  Otherwise, a well crafted error message may trigger a security
 * vulnerability in the terminal emulator or the logging subsystem.
 */
LDKStr ErrorMessage_get_data(const LDKErrorMessage *this_ptr);

/**
 * A possibly human-readable error description.
 * The string should be sanitized before it is used (e.g. emitted to logs
 * or printed to stdout).  Otherwise, a well crafted error message may trigger a security
 * vulnerability in the terminal emulator or the logging subsystem.
 */
void ErrorMessage_set_data(LDKErrorMessage *this_ptr, LDKCVec_u8Z val);

MUST_USE_RES LDKErrorMessage ErrorMessage_new(LDKThirtyTwoBytes channel_id_arg, LDKCVec_u8Z data_arg);

void Ping_free(LDKPing this_ptr);

/**
 * The desired response length
 */
uint16_t Ping_get_ponglen(const LDKPing *this_ptr);

/**
 * The desired response length
 */
void Ping_set_ponglen(LDKPing *this_ptr, uint16_t val);

/**
 * The ping packet size.
 * This field is not sent on the wire. byteslen zeros are sent.
 */
uint16_t Ping_get_byteslen(const LDKPing *this_ptr);

/**
 * The ping packet size.
 * This field is not sent on the wire. byteslen zeros are sent.
 */
void Ping_set_byteslen(LDKPing *this_ptr, uint16_t val);

MUST_USE_RES LDKPing Ping_new(uint16_t ponglen_arg, uint16_t byteslen_arg);

void Pong_free(LDKPong this_ptr);

/**
 * The pong packet size.
 * This field is not sent on the wire. byteslen zeros are sent.
 */
uint16_t Pong_get_byteslen(const LDKPong *this_ptr);

/**
 * The pong packet size.
 * This field is not sent on the wire. byteslen zeros are sent.
 */
void Pong_set_byteslen(LDKPong *this_ptr, uint16_t val);

MUST_USE_RES LDKPong Pong_new(uint16_t byteslen_arg);

void OpenChannel_free(LDKOpenChannel this_ptr);

/**
 * The genesis hash of the blockchain where the channel is to be opened
 */
const uint8_t (*OpenChannel_get_chain_hash(const LDKOpenChannel *this_ptr))[32];

/**
 * The genesis hash of the blockchain where the channel is to be opened
 */
void OpenChannel_set_chain_hash(LDKOpenChannel *this_ptr, LDKThirtyTwoBytes val);

/**
 * A temporary channel ID, until the funding outpoint is announced
 */
const uint8_t (*OpenChannel_get_temporary_channel_id(const LDKOpenChannel *this_ptr))[32];

/**
 * A temporary channel ID, until the funding outpoint is announced
 */
void OpenChannel_set_temporary_channel_id(LDKOpenChannel *this_ptr, LDKThirtyTwoBytes val);

/**
 * The channel value
 */
uint64_t OpenChannel_get_funding_satoshis(const LDKOpenChannel *this_ptr);

/**
 * The channel value
 */
void OpenChannel_set_funding_satoshis(LDKOpenChannel *this_ptr, uint64_t val);

/**
 * The amount to push to the counterparty as part of the open, in milli-satoshi
 */
uint64_t OpenChannel_get_push_msat(const LDKOpenChannel *this_ptr);

/**
 * The amount to push to the counterparty as part of the open, in milli-satoshi
 */
void OpenChannel_set_push_msat(LDKOpenChannel *this_ptr, uint64_t val);

/**
 * The threshold below which outputs on transactions broadcast by sender will be omitted
 */
uint64_t OpenChannel_get_dust_limit_satoshis(const LDKOpenChannel *this_ptr);

/**
 * The threshold below which outputs on transactions broadcast by sender will be omitted
 */
void OpenChannel_set_dust_limit_satoshis(LDKOpenChannel *this_ptr, uint64_t val);

/**
 * The maximum inbound HTLC value in flight towards sender, in milli-satoshi
 */
uint64_t OpenChannel_get_max_htlc_value_in_flight_msat(const LDKOpenChannel *this_ptr);

/**
 * The maximum inbound HTLC value in flight towards sender, in milli-satoshi
 */
void OpenChannel_set_max_htlc_value_in_flight_msat(LDKOpenChannel *this_ptr, uint64_t val);

/**
 * The minimum value unencumbered by HTLCs for the counterparty to keep in the channel
 */
uint64_t OpenChannel_get_channel_reserve_satoshis(const LDKOpenChannel *this_ptr);

/**
 * The minimum value unencumbered by HTLCs for the counterparty to keep in the channel
 */
void OpenChannel_set_channel_reserve_satoshis(LDKOpenChannel *this_ptr, uint64_t val);

/**
 * The minimum HTLC size incoming to sender, in milli-satoshi
 */
uint64_t OpenChannel_get_htlc_minimum_msat(const LDKOpenChannel *this_ptr);

/**
 * The minimum HTLC size incoming to sender, in milli-satoshi
 */
void OpenChannel_set_htlc_minimum_msat(LDKOpenChannel *this_ptr, uint64_t val);

/**
 * The feerate per 1000-weight of sender generated transactions, until updated by update_fee
 */
uint32_t OpenChannel_get_feerate_per_kw(const LDKOpenChannel *this_ptr);

/**
 * The feerate per 1000-weight of sender generated transactions, until updated by update_fee
 */
void OpenChannel_set_feerate_per_kw(LDKOpenChannel *this_ptr, uint32_t val);

/**
 * The number of blocks which the counterparty will have to wait to claim on-chain funds if they broadcast a commitment transaction
 */
uint16_t OpenChannel_get_to_self_delay(const LDKOpenChannel *this_ptr);

/**
 * The number of blocks which the counterparty will have to wait to claim on-chain funds if they broadcast a commitment transaction
 */
void OpenChannel_set_to_self_delay(LDKOpenChannel *this_ptr, uint16_t val);

/**
 * The maximum number of inbound HTLCs towards sender
 */
uint16_t OpenChannel_get_max_accepted_htlcs(const LDKOpenChannel *this_ptr);

/**
 * The maximum number of inbound HTLCs towards sender
 */
void OpenChannel_set_max_accepted_htlcs(LDKOpenChannel *this_ptr, uint16_t val);

/**
 * The sender's key controlling the funding transaction
 */
LDKPublicKey OpenChannel_get_funding_pubkey(const LDKOpenChannel *this_ptr);

/**
 * The sender's key controlling the funding transaction
 */
void OpenChannel_set_funding_pubkey(LDKOpenChannel *this_ptr, LDKPublicKey val);

/**
 * Used to derive a revocation key for transactions broadcast by counterparty
 */
LDKPublicKey OpenChannel_get_revocation_basepoint(const LDKOpenChannel *this_ptr);

/**
 * Used to derive a revocation key for transactions broadcast by counterparty
 */
void OpenChannel_set_revocation_basepoint(LDKOpenChannel *this_ptr, LDKPublicKey val);

/**
 * A payment key to sender for transactions broadcast by counterparty
 */
LDKPublicKey OpenChannel_get_payment_point(const LDKOpenChannel *this_ptr);

/**
 * A payment key to sender for transactions broadcast by counterparty
 */
void OpenChannel_set_payment_point(LDKOpenChannel *this_ptr, LDKPublicKey val);

/**
 * Used to derive a payment key to sender for transactions broadcast by sender
 */
LDKPublicKey OpenChannel_get_delayed_payment_basepoint(const LDKOpenChannel *this_ptr);

/**
 * Used to derive a payment key to sender for transactions broadcast by sender
 */
void OpenChannel_set_delayed_payment_basepoint(LDKOpenChannel *this_ptr, LDKPublicKey val);

/**
 * Used to derive an HTLC payment key to sender
 */
LDKPublicKey OpenChannel_get_htlc_basepoint(const LDKOpenChannel *this_ptr);

/**
 * Used to derive an HTLC payment key to sender
 */
void OpenChannel_set_htlc_basepoint(LDKOpenChannel *this_ptr, LDKPublicKey val);

/**
 * The first to-be-broadcast-by-sender transaction's per commitment point
 */
LDKPublicKey OpenChannel_get_first_per_commitment_point(const LDKOpenChannel *this_ptr);

/**
 * The first to-be-broadcast-by-sender transaction's per commitment point
 */
void OpenChannel_set_first_per_commitment_point(LDKOpenChannel *this_ptr, LDKPublicKey val);

/**
 * Channel flags
 */
uint8_t OpenChannel_get_channel_flags(const LDKOpenChannel *this_ptr);

/**
 * Channel flags
 */
void OpenChannel_set_channel_flags(LDKOpenChannel *this_ptr, uint8_t val);

void AcceptChannel_free(LDKAcceptChannel this_ptr);

/**
 * A temporary channel ID, until the funding outpoint is announced
 */
const uint8_t (*AcceptChannel_get_temporary_channel_id(const LDKAcceptChannel *this_ptr))[32];

/**
 * A temporary channel ID, until the funding outpoint is announced
 */
void AcceptChannel_set_temporary_channel_id(LDKAcceptChannel *this_ptr, LDKThirtyTwoBytes val);

/**
 * The threshold below which outputs on transactions broadcast by sender will be omitted
 */
uint64_t AcceptChannel_get_dust_limit_satoshis(const LDKAcceptChannel *this_ptr);

/**
 * The threshold below which outputs on transactions broadcast by sender will be omitted
 */
void AcceptChannel_set_dust_limit_satoshis(LDKAcceptChannel *this_ptr, uint64_t val);

/**
 * The maximum inbound HTLC value in flight towards sender, in milli-satoshi
 */
uint64_t AcceptChannel_get_max_htlc_value_in_flight_msat(const LDKAcceptChannel *this_ptr);

/**
 * The maximum inbound HTLC value in flight towards sender, in milli-satoshi
 */
void AcceptChannel_set_max_htlc_value_in_flight_msat(LDKAcceptChannel *this_ptr, uint64_t val);

/**
 * The minimum value unencumbered by HTLCs for the counterparty to keep in the channel
 */
uint64_t AcceptChannel_get_channel_reserve_satoshis(const LDKAcceptChannel *this_ptr);

/**
 * The minimum value unencumbered by HTLCs for the counterparty to keep in the channel
 */
void AcceptChannel_set_channel_reserve_satoshis(LDKAcceptChannel *this_ptr, uint64_t val);

/**
 * The minimum HTLC size incoming to sender, in milli-satoshi
 */
uint64_t AcceptChannel_get_htlc_minimum_msat(const LDKAcceptChannel *this_ptr);

/**
 * The minimum HTLC size incoming to sender, in milli-satoshi
 */
void AcceptChannel_set_htlc_minimum_msat(LDKAcceptChannel *this_ptr, uint64_t val);

/**
 * Minimum depth of the funding transaction before the channel is considered open
 */
uint32_t AcceptChannel_get_minimum_depth(const LDKAcceptChannel *this_ptr);

/**
 * Minimum depth of the funding transaction before the channel is considered open
 */
void AcceptChannel_set_minimum_depth(LDKAcceptChannel *this_ptr, uint32_t val);

/**
 * The number of blocks which the counterparty will have to wait to claim on-chain funds if they broadcast a commitment transaction
 */
uint16_t AcceptChannel_get_to_self_delay(const LDKAcceptChannel *this_ptr);

/**
 * The number of blocks which the counterparty will have to wait to claim on-chain funds if they broadcast a commitment transaction
 */
void AcceptChannel_set_to_self_delay(LDKAcceptChannel *this_ptr, uint16_t val);

/**
 * The maximum number of inbound HTLCs towards sender
 */
uint16_t AcceptChannel_get_max_accepted_htlcs(const LDKAcceptChannel *this_ptr);

/**
 * The maximum number of inbound HTLCs towards sender
 */
void AcceptChannel_set_max_accepted_htlcs(LDKAcceptChannel *this_ptr, uint16_t val);

/**
 * The sender's key controlling the funding transaction
 */
LDKPublicKey AcceptChannel_get_funding_pubkey(const LDKAcceptChannel *this_ptr);

/**
 * The sender's key controlling the funding transaction
 */
void AcceptChannel_set_funding_pubkey(LDKAcceptChannel *this_ptr, LDKPublicKey val);

/**
 * Used to derive a revocation key for transactions broadcast by counterparty
 */
LDKPublicKey AcceptChannel_get_revocation_basepoint(const LDKAcceptChannel *this_ptr);

/**
 * Used to derive a revocation key for transactions broadcast by counterparty
 */
void AcceptChannel_set_revocation_basepoint(LDKAcceptChannel *this_ptr, LDKPublicKey val);

/**
 * A payment key to sender for transactions broadcast by counterparty
 */
LDKPublicKey AcceptChannel_get_payment_point(const LDKAcceptChannel *this_ptr);

/**
 * A payment key to sender for transactions broadcast by counterparty
 */
void AcceptChannel_set_payment_point(LDKAcceptChannel *this_ptr, LDKPublicKey val);

/**
 * Used to derive a payment key to sender for transactions broadcast by sender
 */
LDKPublicKey AcceptChannel_get_delayed_payment_basepoint(const LDKAcceptChannel *this_ptr);

/**
 * Used to derive a payment key to sender for transactions broadcast by sender
 */
void AcceptChannel_set_delayed_payment_basepoint(LDKAcceptChannel *this_ptr, LDKPublicKey val);

/**
 * Used to derive an HTLC payment key to sender for transactions broadcast by counterparty
 */
LDKPublicKey AcceptChannel_get_htlc_basepoint(const LDKAcceptChannel *this_ptr);

/**
 * Used to derive an HTLC payment key to sender for transactions broadcast by counterparty
 */
void AcceptChannel_set_htlc_basepoint(LDKAcceptChannel *this_ptr, LDKPublicKey val);

/**
 * The first to-be-broadcast-by-sender transaction's per commitment point
 */
LDKPublicKey AcceptChannel_get_first_per_commitment_point(const LDKAcceptChannel *this_ptr);

/**
 * The first to-be-broadcast-by-sender transaction's per commitment point
 */
void AcceptChannel_set_first_per_commitment_point(LDKAcceptChannel *this_ptr, LDKPublicKey val);

void FundingCreated_free(LDKFundingCreated this_ptr);

/**
 * A temporary channel ID, until the funding is established
 */
const uint8_t (*FundingCreated_get_temporary_channel_id(const LDKFundingCreated *this_ptr))[32];

/**
 * A temporary channel ID, until the funding is established
 */
void FundingCreated_set_temporary_channel_id(LDKFundingCreated *this_ptr, LDKThirtyTwoBytes val);

/**
 * The funding transaction ID
 */
const uint8_t (*FundingCreated_get_funding_txid(const LDKFundingCreated *this_ptr))[32];

/**
 * The funding transaction ID
 */
void FundingCreated_set_funding_txid(LDKFundingCreated *this_ptr, LDKThirtyTwoBytes val);

/**
 * The specific output index funding this channel
 */
uint16_t FundingCreated_get_funding_output_index(const LDKFundingCreated *this_ptr);

/**
 * The specific output index funding this channel
 */
void FundingCreated_set_funding_output_index(LDKFundingCreated *this_ptr, uint16_t val);

/**
 * The signature of the channel initiator (funder) on the funding transaction
 */
LDKSignature FundingCreated_get_signature(const LDKFundingCreated *this_ptr);

/**
 * The signature of the channel initiator (funder) on the funding transaction
 */
void FundingCreated_set_signature(LDKFundingCreated *this_ptr, LDKSignature val);

MUST_USE_RES LDKFundingCreated FundingCreated_new(LDKThirtyTwoBytes temporary_channel_id_arg, LDKThirtyTwoBytes funding_txid_arg, uint16_t funding_output_index_arg, LDKSignature signature_arg);

void FundingSigned_free(LDKFundingSigned this_ptr);

/**
 * The channel ID
 */
const uint8_t (*FundingSigned_get_channel_id(const LDKFundingSigned *this_ptr))[32];

/**
 * The channel ID
 */
void FundingSigned_set_channel_id(LDKFundingSigned *this_ptr, LDKThirtyTwoBytes val);

/**
 * The signature of the channel acceptor (fundee) on the funding transaction
 */
LDKSignature FundingSigned_get_signature(const LDKFundingSigned *this_ptr);

/**
 * The signature of the channel acceptor (fundee) on the funding transaction
 */
void FundingSigned_set_signature(LDKFundingSigned *this_ptr, LDKSignature val);

MUST_USE_RES LDKFundingSigned FundingSigned_new(LDKThirtyTwoBytes channel_id_arg, LDKSignature signature_arg);

void FundingLocked_free(LDKFundingLocked this_ptr);

/**
 * The channel ID
 */
const uint8_t (*FundingLocked_get_channel_id(const LDKFundingLocked *this_ptr))[32];

/**
 * The channel ID
 */
void FundingLocked_set_channel_id(LDKFundingLocked *this_ptr, LDKThirtyTwoBytes val);

/**
 * The per-commitment point of the second commitment transaction
 */
LDKPublicKey FundingLocked_get_next_per_commitment_point(const LDKFundingLocked *this_ptr);

/**
 * The per-commitment point of the second commitment transaction
 */
void FundingLocked_set_next_per_commitment_point(LDKFundingLocked *this_ptr, LDKPublicKey val);

MUST_USE_RES LDKFundingLocked FundingLocked_new(LDKThirtyTwoBytes channel_id_arg, LDKPublicKey next_per_commitment_point_arg);

void Shutdown_free(LDKShutdown this_ptr);

/**
 * The channel ID
 */
const uint8_t (*Shutdown_get_channel_id(const LDKShutdown *this_ptr))[32];

/**
 * The channel ID
 */
void Shutdown_set_channel_id(LDKShutdown *this_ptr, LDKThirtyTwoBytes val);

/**
 * The destination of this peer's funds on closing.
 * Must be in one of these forms: p2pkh, p2sh, p2wpkh, p2wsh.
 */
LDKu8slice Shutdown_get_scriptpubkey(const LDKShutdown *this_ptr);

/**
 * The destination of this peer's funds on closing.
 * Must be in one of these forms: p2pkh, p2sh, p2wpkh, p2wsh.
 */
void Shutdown_set_scriptpubkey(LDKShutdown *this_ptr, LDKCVec_u8Z val);

MUST_USE_RES LDKShutdown Shutdown_new(LDKThirtyTwoBytes channel_id_arg, LDKCVec_u8Z scriptpubkey_arg);

void ClosingSigned_free(LDKClosingSigned this_ptr);

/**
 * The channel ID
 */
const uint8_t (*ClosingSigned_get_channel_id(const LDKClosingSigned *this_ptr))[32];

/**
 * The channel ID
 */
void ClosingSigned_set_channel_id(LDKClosingSigned *this_ptr, LDKThirtyTwoBytes val);

/**
 * The proposed total fee for the closing transaction
 */
uint64_t ClosingSigned_get_fee_satoshis(const LDKClosingSigned *this_ptr);

/**
 * The proposed total fee for the closing transaction
 */
void ClosingSigned_set_fee_satoshis(LDKClosingSigned *this_ptr, uint64_t val);

/**
 * A signature on the closing transaction
 */
LDKSignature ClosingSigned_get_signature(const LDKClosingSigned *this_ptr);

/**
 * A signature on the closing transaction
 */
void ClosingSigned_set_signature(LDKClosingSigned *this_ptr, LDKSignature val);

MUST_USE_RES LDKClosingSigned ClosingSigned_new(LDKThirtyTwoBytes channel_id_arg, uint64_t fee_satoshis_arg, LDKSignature signature_arg);

void UpdateAddHTLC_free(LDKUpdateAddHTLC this_ptr);

/**
 * The channel ID
 */
const uint8_t (*UpdateAddHTLC_get_channel_id(const LDKUpdateAddHTLC *this_ptr))[32];

/**
 * The channel ID
 */
void UpdateAddHTLC_set_channel_id(LDKUpdateAddHTLC *this_ptr, LDKThirtyTwoBytes val);

/**
 * The HTLC ID
 */
uint64_t UpdateAddHTLC_get_htlc_id(const LDKUpdateAddHTLC *this_ptr);

/**
 * The HTLC ID
 */
void UpdateAddHTLC_set_htlc_id(LDKUpdateAddHTLC *this_ptr, uint64_t val);

/**
 * The HTLC value in milli-satoshi
 */
uint64_t UpdateAddHTLC_get_amount_msat(const LDKUpdateAddHTLC *this_ptr);

/**
 * The HTLC value in milli-satoshi
 */
void UpdateAddHTLC_set_amount_msat(LDKUpdateAddHTLC *this_ptr, uint64_t val);

/**
 * The payment hash, the pre-image of which controls HTLC redemption
 */
const uint8_t (*UpdateAddHTLC_get_payment_hash(const LDKUpdateAddHTLC *this_ptr))[32];

/**
 * The payment hash, the pre-image of which controls HTLC redemption
 */
void UpdateAddHTLC_set_payment_hash(LDKUpdateAddHTLC *this_ptr, LDKThirtyTwoBytes val);

/**
 * The expiry height of the HTLC
 */
uint32_t UpdateAddHTLC_get_cltv_expiry(const LDKUpdateAddHTLC *this_ptr);

/**
 * The expiry height of the HTLC
 */
void UpdateAddHTLC_set_cltv_expiry(LDKUpdateAddHTLC *this_ptr, uint32_t val);

void UpdateFulfillHTLC_free(LDKUpdateFulfillHTLC this_ptr);

/**
 * The channel ID
 */
const uint8_t (*UpdateFulfillHTLC_get_channel_id(const LDKUpdateFulfillHTLC *this_ptr))[32];

/**
 * The channel ID
 */
void UpdateFulfillHTLC_set_channel_id(LDKUpdateFulfillHTLC *this_ptr, LDKThirtyTwoBytes val);

/**
 * The HTLC ID
 */
uint64_t UpdateFulfillHTLC_get_htlc_id(const LDKUpdateFulfillHTLC *this_ptr);

/**
 * The HTLC ID
 */
void UpdateFulfillHTLC_set_htlc_id(LDKUpdateFulfillHTLC *this_ptr, uint64_t val);

/**
 * The pre-image of the payment hash, allowing HTLC redemption
 */
const uint8_t (*UpdateFulfillHTLC_get_payment_preimage(const LDKUpdateFulfillHTLC *this_ptr))[32];

/**
 * The pre-image of the payment hash, allowing HTLC redemption
 */
void UpdateFulfillHTLC_set_payment_preimage(LDKUpdateFulfillHTLC *this_ptr, LDKThirtyTwoBytes val);

MUST_USE_RES LDKUpdateFulfillHTLC UpdateFulfillHTLC_new(LDKThirtyTwoBytes channel_id_arg, uint64_t htlc_id_arg, LDKThirtyTwoBytes payment_preimage_arg);

void UpdateFailHTLC_free(LDKUpdateFailHTLC this_ptr);

/**
 * The channel ID
 */
const uint8_t (*UpdateFailHTLC_get_channel_id(const LDKUpdateFailHTLC *this_ptr))[32];

/**
 * The channel ID
 */
void UpdateFailHTLC_set_channel_id(LDKUpdateFailHTLC *this_ptr, LDKThirtyTwoBytes val);

/**
 * The HTLC ID
 */
uint64_t UpdateFailHTLC_get_htlc_id(const LDKUpdateFailHTLC *this_ptr);

/**
 * The HTLC ID
 */
void UpdateFailHTLC_set_htlc_id(LDKUpdateFailHTLC *this_ptr, uint64_t val);

void UpdateFailMalformedHTLC_free(LDKUpdateFailMalformedHTLC this_ptr);

/**
 * The channel ID
 */
const uint8_t (*UpdateFailMalformedHTLC_get_channel_id(const LDKUpdateFailMalformedHTLC *this_ptr))[32];

/**
 * The channel ID
 */
void UpdateFailMalformedHTLC_set_channel_id(LDKUpdateFailMalformedHTLC *this_ptr, LDKThirtyTwoBytes val);

/**
 * The HTLC ID
 */
uint64_t UpdateFailMalformedHTLC_get_htlc_id(const LDKUpdateFailMalformedHTLC *this_ptr);

/**
 * The HTLC ID
 */
void UpdateFailMalformedHTLC_set_htlc_id(LDKUpdateFailMalformedHTLC *this_ptr, uint64_t val);

/**
 * The failure code
 */
uint16_t UpdateFailMalformedHTLC_get_failure_code(const LDKUpdateFailMalformedHTLC *this_ptr);

/**
 * The failure code
 */
void UpdateFailMalformedHTLC_set_failure_code(LDKUpdateFailMalformedHTLC *this_ptr, uint16_t val);

void CommitmentSigned_free(LDKCommitmentSigned this_ptr);

/**
 * The channel ID
 */
const uint8_t (*CommitmentSigned_get_channel_id(const LDKCommitmentSigned *this_ptr))[32];

/**
 * The channel ID
 */
void CommitmentSigned_set_channel_id(LDKCommitmentSigned *this_ptr, LDKThirtyTwoBytes val);

/**
 * A signature on the commitment transaction
 */
LDKSignature CommitmentSigned_get_signature(const LDKCommitmentSigned *this_ptr);

/**
 * A signature on the commitment transaction
 */
void CommitmentSigned_set_signature(LDKCommitmentSigned *this_ptr, LDKSignature val);

/**
 * Signatures on the HTLC transactions
 */
void CommitmentSigned_set_htlc_signatures(LDKCommitmentSigned *this_ptr, LDKCVec_SignatureZ val);

MUST_USE_RES LDKCommitmentSigned CommitmentSigned_new(LDKThirtyTwoBytes channel_id_arg, LDKSignature signature_arg, LDKCVec_SignatureZ htlc_signatures_arg);

void RevokeAndACK_free(LDKRevokeAndACK this_ptr);

/**
 * The channel ID
 */
const uint8_t (*RevokeAndACK_get_channel_id(const LDKRevokeAndACK *this_ptr))[32];

/**
 * The channel ID
 */
void RevokeAndACK_set_channel_id(LDKRevokeAndACK *this_ptr, LDKThirtyTwoBytes val);

/**
 * The secret corresponding to the per-commitment point
 */
const uint8_t (*RevokeAndACK_get_per_commitment_secret(const LDKRevokeAndACK *this_ptr))[32];

/**
 * The secret corresponding to the per-commitment point
 */
void RevokeAndACK_set_per_commitment_secret(LDKRevokeAndACK *this_ptr, LDKThirtyTwoBytes val);

/**
 * The next sender-broadcast commitment transaction's per-commitment point
 */
LDKPublicKey RevokeAndACK_get_next_per_commitment_point(const LDKRevokeAndACK *this_ptr);

/**
 * The next sender-broadcast commitment transaction's per-commitment point
 */
void RevokeAndACK_set_next_per_commitment_point(LDKRevokeAndACK *this_ptr, LDKPublicKey val);

MUST_USE_RES LDKRevokeAndACK RevokeAndACK_new(LDKThirtyTwoBytes channel_id_arg, LDKThirtyTwoBytes per_commitment_secret_arg, LDKPublicKey next_per_commitment_point_arg);

void UpdateFee_free(LDKUpdateFee this_ptr);

/**
 * The channel ID
 */
const uint8_t (*UpdateFee_get_channel_id(const LDKUpdateFee *this_ptr))[32];

/**
 * The channel ID
 */
void UpdateFee_set_channel_id(LDKUpdateFee *this_ptr, LDKThirtyTwoBytes val);

/**
 * Fee rate per 1000-weight of the transaction
 */
uint32_t UpdateFee_get_feerate_per_kw(const LDKUpdateFee *this_ptr);

/**
 * Fee rate per 1000-weight of the transaction
 */
void UpdateFee_set_feerate_per_kw(LDKUpdateFee *this_ptr, uint32_t val);

MUST_USE_RES LDKUpdateFee UpdateFee_new(LDKThirtyTwoBytes channel_id_arg, uint32_t feerate_per_kw_arg);

void DataLossProtect_free(LDKDataLossProtect this_ptr);

/**
 * Proof that the sender knows the per-commitment secret of a specific commitment transaction
 * belonging to the recipient
 */
const uint8_t (*DataLossProtect_get_your_last_per_commitment_secret(const LDKDataLossProtect *this_ptr))[32];

/**
 * Proof that the sender knows the per-commitment secret of a specific commitment transaction
 * belonging to the recipient
 */
void DataLossProtect_set_your_last_per_commitment_secret(LDKDataLossProtect *this_ptr, LDKThirtyTwoBytes val);

/**
 * The sender's per-commitment point for their current commitment transaction
 */
LDKPublicKey DataLossProtect_get_my_current_per_commitment_point(const LDKDataLossProtect *this_ptr);

/**
 * The sender's per-commitment point for their current commitment transaction
 */
void DataLossProtect_set_my_current_per_commitment_point(LDKDataLossProtect *this_ptr, LDKPublicKey val);

MUST_USE_RES LDKDataLossProtect DataLossProtect_new(LDKThirtyTwoBytes your_last_per_commitment_secret_arg, LDKPublicKey my_current_per_commitment_point_arg);

void ChannelReestablish_free(LDKChannelReestablish this_ptr);

/**
 * The channel ID
 */
const uint8_t (*ChannelReestablish_get_channel_id(const LDKChannelReestablish *this_ptr))[32];

/**
 * The channel ID
 */
void ChannelReestablish_set_channel_id(LDKChannelReestablish *this_ptr, LDKThirtyTwoBytes val);

/**
 * The next commitment number for the sender
 */
uint64_t ChannelReestablish_get_next_local_commitment_number(const LDKChannelReestablish *this_ptr);

/**
 * The next commitment number for the sender
 */
void ChannelReestablish_set_next_local_commitment_number(LDKChannelReestablish *this_ptr, uint64_t val);

/**
 * The next commitment number for the recipient
 */
uint64_t ChannelReestablish_get_next_remote_commitment_number(const LDKChannelReestablish *this_ptr);

/**
 * The next commitment number for the recipient
 */
void ChannelReestablish_set_next_remote_commitment_number(LDKChannelReestablish *this_ptr, uint64_t val);

void AnnouncementSignatures_free(LDKAnnouncementSignatures this_ptr);

/**
 * The channel ID
 */
const uint8_t (*AnnouncementSignatures_get_channel_id(const LDKAnnouncementSignatures *this_ptr))[32];

/**
 * The channel ID
 */
void AnnouncementSignatures_set_channel_id(LDKAnnouncementSignatures *this_ptr, LDKThirtyTwoBytes val);

/**
 * The short channel ID
 */
uint64_t AnnouncementSignatures_get_short_channel_id(const LDKAnnouncementSignatures *this_ptr);

/**
 * The short channel ID
 */
void AnnouncementSignatures_set_short_channel_id(LDKAnnouncementSignatures *this_ptr, uint64_t val);

/**
 * A signature by the node key
 */
LDKSignature AnnouncementSignatures_get_node_signature(const LDKAnnouncementSignatures *this_ptr);

/**
 * A signature by the node key
 */
void AnnouncementSignatures_set_node_signature(LDKAnnouncementSignatures *this_ptr, LDKSignature val);

/**
 * A signature by the funding key
 */
LDKSignature AnnouncementSignatures_get_bitcoin_signature(const LDKAnnouncementSignatures *this_ptr);

/**
 * A signature by the funding key
 */
void AnnouncementSignatures_set_bitcoin_signature(LDKAnnouncementSignatures *this_ptr, LDKSignature val);

MUST_USE_RES LDKAnnouncementSignatures AnnouncementSignatures_new(LDKThirtyTwoBytes channel_id_arg, uint64_t short_channel_id_arg, LDKSignature node_signature_arg, LDKSignature bitcoin_signature_arg);

void NetAddress_free(LDKNetAddress this_ptr);

void UnsignedNodeAnnouncement_free(LDKUnsignedNodeAnnouncement this_ptr);

/**
 * The advertised features
 */
LDKNodeFeatures UnsignedNodeAnnouncement_get_features(const LDKUnsignedNodeAnnouncement *this_ptr);

/**
 * The advertised features
 */
void UnsignedNodeAnnouncement_set_features(LDKUnsignedNodeAnnouncement *this_ptr, LDKNodeFeatures val);

/**
 * A strictly monotonic announcement counter, with gaps allowed
 */
uint32_t UnsignedNodeAnnouncement_get_timestamp(const LDKUnsignedNodeAnnouncement *this_ptr);

/**
 * A strictly monotonic announcement counter, with gaps allowed
 */
void UnsignedNodeAnnouncement_set_timestamp(LDKUnsignedNodeAnnouncement *this_ptr, uint32_t val);

/**
 * The node_id this announcement originated from (don't rebroadcast the node_announcement back
 * to this node).
 */
LDKPublicKey UnsignedNodeAnnouncement_get_node_id(const LDKUnsignedNodeAnnouncement *this_ptr);

/**
 * The node_id this announcement originated from (don't rebroadcast the node_announcement back
 * to this node).
 */
void UnsignedNodeAnnouncement_set_node_id(LDKUnsignedNodeAnnouncement *this_ptr, LDKPublicKey val);

/**
 * An RGB color for UI purposes
 */
const uint8_t (*UnsignedNodeAnnouncement_get_rgb(const LDKUnsignedNodeAnnouncement *this_ptr))[3];

/**
 * An RGB color for UI purposes
 */
void UnsignedNodeAnnouncement_set_rgb(LDKUnsignedNodeAnnouncement *this_ptr, LDKThreeBytes val);

/**
 * An alias, for UI purposes.  This should be sanitized before use.  There is no guarantee
 * of uniqueness.
 */
const uint8_t (*UnsignedNodeAnnouncement_get_alias(const LDKUnsignedNodeAnnouncement *this_ptr))[32];

/**
 * An alias, for UI purposes.  This should be sanitized before use.  There is no guarantee
 * of uniqueness.
 */
void UnsignedNodeAnnouncement_set_alias(LDKUnsignedNodeAnnouncement *this_ptr, LDKThirtyTwoBytes val);

/**
 * List of addresses on which this node is reachable
 */
void UnsignedNodeAnnouncement_set_addresses(LDKUnsignedNodeAnnouncement *this_ptr, LDKCVec_NetAddressZ val);

void NodeAnnouncement_free(LDKNodeAnnouncement this_ptr);

/**
 * The signature by the node key
 */
LDKSignature NodeAnnouncement_get_signature(const LDKNodeAnnouncement *this_ptr);

/**
 * The signature by the node key
 */
void NodeAnnouncement_set_signature(LDKNodeAnnouncement *this_ptr, LDKSignature val);

/**
 * The actual content of the announcement
 */
LDKUnsignedNodeAnnouncement NodeAnnouncement_get_contents(const LDKNodeAnnouncement *this_ptr);

/**
 * The actual content of the announcement
 */
void NodeAnnouncement_set_contents(LDKNodeAnnouncement *this_ptr, LDKUnsignedNodeAnnouncement val);

MUST_USE_RES LDKNodeAnnouncement NodeAnnouncement_new(LDKSignature signature_arg, LDKUnsignedNodeAnnouncement contents_arg);

void UnsignedChannelAnnouncement_free(LDKUnsignedChannelAnnouncement this_ptr);

/**
 * The advertised channel features
 */
LDKChannelFeatures UnsignedChannelAnnouncement_get_features(const LDKUnsignedChannelAnnouncement *this_ptr);

/**
 * The advertised channel features
 */
void UnsignedChannelAnnouncement_set_features(LDKUnsignedChannelAnnouncement *this_ptr, LDKChannelFeatures val);

/**
 * The genesis hash of the blockchain where the channel is to be opened
 */
const uint8_t (*UnsignedChannelAnnouncement_get_chain_hash(const LDKUnsignedChannelAnnouncement *this_ptr))[32];

/**
 * The genesis hash of the blockchain where the channel is to be opened
 */
void UnsignedChannelAnnouncement_set_chain_hash(LDKUnsignedChannelAnnouncement *this_ptr, LDKThirtyTwoBytes val);

/**
 * The short channel ID
 */
uint64_t UnsignedChannelAnnouncement_get_short_channel_id(const LDKUnsignedChannelAnnouncement *this_ptr);

/**
 * The short channel ID
 */
void UnsignedChannelAnnouncement_set_short_channel_id(LDKUnsignedChannelAnnouncement *this_ptr, uint64_t val);

/**
 * One of the two node_ids which are endpoints of this channel
 */
LDKPublicKey UnsignedChannelAnnouncement_get_node_id_1(const LDKUnsignedChannelAnnouncement *this_ptr);

/**
 * One of the two node_ids which are endpoints of this channel
 */
void UnsignedChannelAnnouncement_set_node_id_1(LDKUnsignedChannelAnnouncement *this_ptr, LDKPublicKey val);

/**
 * The other of the two node_ids which are endpoints of this channel
 */
LDKPublicKey UnsignedChannelAnnouncement_get_node_id_2(const LDKUnsignedChannelAnnouncement *this_ptr);

/**
 * The other of the two node_ids which are endpoints of this channel
 */
void UnsignedChannelAnnouncement_set_node_id_2(LDKUnsignedChannelAnnouncement *this_ptr, LDKPublicKey val);

/**
 * The funding key for the first node
 */
LDKPublicKey UnsignedChannelAnnouncement_get_bitcoin_key_1(const LDKUnsignedChannelAnnouncement *this_ptr);

/**
 * The funding key for the first node
 */
void UnsignedChannelAnnouncement_set_bitcoin_key_1(LDKUnsignedChannelAnnouncement *this_ptr, LDKPublicKey val);

/**
 * The funding key for the second node
 */
LDKPublicKey UnsignedChannelAnnouncement_get_bitcoin_key_2(const LDKUnsignedChannelAnnouncement *this_ptr);

/**
 * The funding key for the second node
 */
void UnsignedChannelAnnouncement_set_bitcoin_key_2(LDKUnsignedChannelAnnouncement *this_ptr, LDKPublicKey val);

void ChannelAnnouncement_free(LDKChannelAnnouncement this_ptr);

/**
 * Authentication of the announcement by the first public node
 */
LDKSignature ChannelAnnouncement_get_node_signature_1(const LDKChannelAnnouncement *this_ptr);

/**
 * Authentication of the announcement by the first public node
 */
void ChannelAnnouncement_set_node_signature_1(LDKChannelAnnouncement *this_ptr, LDKSignature val);

/**
 * Authentication of the announcement by the second public node
 */
LDKSignature ChannelAnnouncement_get_node_signature_2(const LDKChannelAnnouncement *this_ptr);

/**
 * Authentication of the announcement by the second public node
 */
void ChannelAnnouncement_set_node_signature_2(LDKChannelAnnouncement *this_ptr, LDKSignature val);

/**
 * Proof of funding UTXO ownership by the first public node
 */
LDKSignature ChannelAnnouncement_get_bitcoin_signature_1(const LDKChannelAnnouncement *this_ptr);

/**
 * Proof of funding UTXO ownership by the first public node
 */
void ChannelAnnouncement_set_bitcoin_signature_1(LDKChannelAnnouncement *this_ptr, LDKSignature val);

/**
 * Proof of funding UTXO ownership by the second public node
 */
LDKSignature ChannelAnnouncement_get_bitcoin_signature_2(const LDKChannelAnnouncement *this_ptr);

/**
 * Proof of funding UTXO ownership by the second public node
 */
void ChannelAnnouncement_set_bitcoin_signature_2(LDKChannelAnnouncement *this_ptr, LDKSignature val);

/**
 * The actual announcement
 */
LDKUnsignedChannelAnnouncement ChannelAnnouncement_get_contents(const LDKChannelAnnouncement *this_ptr);

/**
 * The actual announcement
 */
void ChannelAnnouncement_set_contents(LDKChannelAnnouncement *this_ptr, LDKUnsignedChannelAnnouncement val);

MUST_USE_RES LDKChannelAnnouncement ChannelAnnouncement_new(LDKSignature node_signature_1_arg, LDKSignature node_signature_2_arg, LDKSignature bitcoin_signature_1_arg, LDKSignature bitcoin_signature_2_arg, LDKUnsignedChannelAnnouncement contents_arg);

void UnsignedChannelUpdate_free(LDKUnsignedChannelUpdate this_ptr);

/**
 * The genesis hash of the blockchain where the channel is to be opened
 */
const uint8_t (*UnsignedChannelUpdate_get_chain_hash(const LDKUnsignedChannelUpdate *this_ptr))[32];

/**
 * The genesis hash of the blockchain where the channel is to be opened
 */
void UnsignedChannelUpdate_set_chain_hash(LDKUnsignedChannelUpdate *this_ptr, LDKThirtyTwoBytes val);

/**
 * The short channel ID
 */
uint64_t UnsignedChannelUpdate_get_short_channel_id(const LDKUnsignedChannelUpdate *this_ptr);

/**
 * The short channel ID
 */
void UnsignedChannelUpdate_set_short_channel_id(LDKUnsignedChannelUpdate *this_ptr, uint64_t val);

/**
 * A strictly monotonic announcement counter, with gaps allowed, specific to this channel
 */
uint32_t UnsignedChannelUpdate_get_timestamp(const LDKUnsignedChannelUpdate *this_ptr);

/**
 * A strictly monotonic announcement counter, with gaps allowed, specific to this channel
 */
void UnsignedChannelUpdate_set_timestamp(LDKUnsignedChannelUpdate *this_ptr, uint32_t val);

/**
 * Channel flags
 */
uint8_t UnsignedChannelUpdate_get_flags(const LDKUnsignedChannelUpdate *this_ptr);

/**
 * Channel flags
 */
void UnsignedChannelUpdate_set_flags(LDKUnsignedChannelUpdate *this_ptr, uint8_t val);

/**
 * The number of blocks to subtract from incoming HTLC cltv_expiry values
 */
uint16_t UnsignedChannelUpdate_get_cltv_expiry_delta(const LDKUnsignedChannelUpdate *this_ptr);

/**
 * The number of blocks to subtract from incoming HTLC cltv_expiry values
 */
void UnsignedChannelUpdate_set_cltv_expiry_delta(LDKUnsignedChannelUpdate *this_ptr, uint16_t val);

/**
 * The minimum HTLC size incoming to sender, in milli-satoshi
 */
uint64_t UnsignedChannelUpdate_get_htlc_minimum_msat(const LDKUnsignedChannelUpdate *this_ptr);

/**
 * The minimum HTLC size incoming to sender, in milli-satoshi
 */
void UnsignedChannelUpdate_set_htlc_minimum_msat(LDKUnsignedChannelUpdate *this_ptr, uint64_t val);

/**
 * The base HTLC fee charged by sender, in milli-satoshi
 */
uint32_t UnsignedChannelUpdate_get_fee_base_msat(const LDKUnsignedChannelUpdate *this_ptr);

/**
 * The base HTLC fee charged by sender, in milli-satoshi
 */
void UnsignedChannelUpdate_set_fee_base_msat(LDKUnsignedChannelUpdate *this_ptr, uint32_t val);

/**
 * The amount to fee multiplier, in micro-satoshi
 */
uint32_t UnsignedChannelUpdate_get_fee_proportional_millionths(const LDKUnsignedChannelUpdate *this_ptr);

/**
 * The amount to fee multiplier, in micro-satoshi
 */
void UnsignedChannelUpdate_set_fee_proportional_millionths(LDKUnsignedChannelUpdate *this_ptr, uint32_t val);

void ChannelUpdate_free(LDKChannelUpdate this_ptr);

/**
 * A signature of the channel update
 */
LDKSignature ChannelUpdate_get_signature(const LDKChannelUpdate *this_ptr);

/**
 * A signature of the channel update
 */
void ChannelUpdate_set_signature(LDKChannelUpdate *this_ptr, LDKSignature val);

/**
 * The actual channel update
 */
LDKUnsignedChannelUpdate ChannelUpdate_get_contents(const LDKChannelUpdate *this_ptr);

/**
 * The actual channel update
 */
void ChannelUpdate_set_contents(LDKChannelUpdate *this_ptr, LDKUnsignedChannelUpdate val);

MUST_USE_RES LDKChannelUpdate ChannelUpdate_new(LDKSignature signature_arg, LDKUnsignedChannelUpdate contents_arg);

void QueryChannelRange_free(LDKQueryChannelRange this_ptr);

/**
 * The genesis hash of the blockchain being queried
 */
const uint8_t (*QueryChannelRange_get_chain_hash(const LDKQueryChannelRange *this_ptr))[32];

/**
 * The genesis hash of the blockchain being queried
 */
void QueryChannelRange_set_chain_hash(LDKQueryChannelRange *this_ptr, LDKThirtyTwoBytes val);

/**
 * The height of the first block for the channel UTXOs being queried
 */
uint32_t QueryChannelRange_get_first_blocknum(const LDKQueryChannelRange *this_ptr);

/**
 * The height of the first block for the channel UTXOs being queried
 */
void QueryChannelRange_set_first_blocknum(LDKQueryChannelRange *this_ptr, uint32_t val);

/**
 * The number of blocks to include in the query results
 */
uint32_t QueryChannelRange_get_number_of_blocks(const LDKQueryChannelRange *this_ptr);

/**
 * The number of blocks to include in the query results
 */
void QueryChannelRange_set_number_of_blocks(LDKQueryChannelRange *this_ptr, uint32_t val);

MUST_USE_RES LDKQueryChannelRange QueryChannelRange_new(LDKThirtyTwoBytes chain_hash_arg, uint32_t first_blocknum_arg, uint32_t number_of_blocks_arg);

void ReplyChannelRange_free(LDKReplyChannelRange this_ptr);

/**
 * The genesis hash of the blockchain being queried
 */
const uint8_t (*ReplyChannelRange_get_chain_hash(const LDKReplyChannelRange *this_ptr))[32];

/**
 * The genesis hash of the blockchain being queried
 */
void ReplyChannelRange_set_chain_hash(LDKReplyChannelRange *this_ptr, LDKThirtyTwoBytes val);

/**
 * The height of the first block in the range of the reply
 */
uint32_t ReplyChannelRange_get_first_blocknum(const LDKReplyChannelRange *this_ptr);

/**
 * The height of the first block in the range of the reply
 */
void ReplyChannelRange_set_first_blocknum(LDKReplyChannelRange *this_ptr, uint32_t val);

/**
 * The number of blocks included in the range of the reply
 */
uint32_t ReplyChannelRange_get_number_of_blocks(const LDKReplyChannelRange *this_ptr);

/**
 * The number of blocks included in the range of the reply
 */
void ReplyChannelRange_set_number_of_blocks(LDKReplyChannelRange *this_ptr, uint32_t val);

/**
 * Indicates if the query recipient maintains up-to-date channel
 * information for the chain_hash
 */
bool ReplyChannelRange_get_full_information(const LDKReplyChannelRange *this_ptr);

/**
 * Indicates if the query recipient maintains up-to-date channel
 * information for the chain_hash
 */
void ReplyChannelRange_set_full_information(LDKReplyChannelRange *this_ptr, bool val);

/**
 * The short_channel_ids in the channel range
 */
void ReplyChannelRange_set_short_channel_ids(LDKReplyChannelRange *this_ptr, LDKCVec_u64Z val);

MUST_USE_RES LDKReplyChannelRange ReplyChannelRange_new(LDKThirtyTwoBytes chain_hash_arg, uint32_t first_blocknum_arg, uint32_t number_of_blocks_arg, bool full_information_arg, LDKCVec_u64Z short_channel_ids_arg);

void QueryShortChannelIds_free(LDKQueryShortChannelIds this_ptr);

/**
 * The genesis hash of the blockchain being queried
 */
const uint8_t (*QueryShortChannelIds_get_chain_hash(const LDKQueryShortChannelIds *this_ptr))[32];

/**
 * The genesis hash of the blockchain being queried
 */
void QueryShortChannelIds_set_chain_hash(LDKQueryShortChannelIds *this_ptr, LDKThirtyTwoBytes val);

/**
 * The short_channel_ids that are being queried
 */
void QueryShortChannelIds_set_short_channel_ids(LDKQueryShortChannelIds *this_ptr, LDKCVec_u64Z val);

MUST_USE_RES LDKQueryShortChannelIds QueryShortChannelIds_new(LDKThirtyTwoBytes chain_hash_arg, LDKCVec_u64Z short_channel_ids_arg);

void ReplyShortChannelIdsEnd_free(LDKReplyShortChannelIdsEnd this_ptr);

/**
 * The genesis hash of the blockchain that was queried
 */
const uint8_t (*ReplyShortChannelIdsEnd_get_chain_hash(const LDKReplyShortChannelIdsEnd *this_ptr))[32];

/**
 * The genesis hash of the blockchain that was queried
 */
void ReplyShortChannelIdsEnd_set_chain_hash(LDKReplyShortChannelIdsEnd *this_ptr, LDKThirtyTwoBytes val);

/**
 * Indicates if the query recipient maintains up-to-date channel
 * information for the chain_hash
 */
bool ReplyShortChannelIdsEnd_get_full_information(const LDKReplyShortChannelIdsEnd *this_ptr);

/**
 * Indicates if the query recipient maintains up-to-date channel
 * information for the chain_hash
 */
void ReplyShortChannelIdsEnd_set_full_information(LDKReplyShortChannelIdsEnd *this_ptr, bool val);

MUST_USE_RES LDKReplyShortChannelIdsEnd ReplyShortChannelIdsEnd_new(LDKThirtyTwoBytes chain_hash_arg, bool full_information_arg);

void GossipTimestampFilter_free(LDKGossipTimestampFilter this_ptr);

/**
 * The genesis hash of the blockchain for channel and node information
 */
const uint8_t (*GossipTimestampFilter_get_chain_hash(const LDKGossipTimestampFilter *this_ptr))[32];

/**
 * The genesis hash of the blockchain for channel and node information
 */
void GossipTimestampFilter_set_chain_hash(LDKGossipTimestampFilter *this_ptr, LDKThirtyTwoBytes val);

/**
 * The starting unix timestamp
 */
uint32_t GossipTimestampFilter_get_first_timestamp(const LDKGossipTimestampFilter *this_ptr);

/**
 * The starting unix timestamp
 */
void GossipTimestampFilter_set_first_timestamp(LDKGossipTimestampFilter *this_ptr, uint32_t val);

/**
 * The range of information in seconds
 */
uint32_t GossipTimestampFilter_get_timestamp_range(const LDKGossipTimestampFilter *this_ptr);

/**
 * The range of information in seconds
 */
void GossipTimestampFilter_set_timestamp_range(LDKGossipTimestampFilter *this_ptr, uint32_t val);

MUST_USE_RES LDKGossipTimestampFilter GossipTimestampFilter_new(LDKThirtyTwoBytes chain_hash_arg, uint32_t first_timestamp_arg, uint32_t timestamp_range_arg);

void ErrorAction_free(LDKErrorAction this_ptr);

void LightningError_free(LDKLightningError this_ptr);

/**
 * A human-readable message describing the error
 */
LDKStr LightningError_get_err(const LDKLightningError *this_ptr);

/**
 * A human-readable message describing the error
 */
void LightningError_set_err(LDKLightningError *this_ptr, LDKCVec_u8Z val);

/**
 * The action which should be taken against the offending peer.
 */
LDKErrorAction LightningError_get_action(const LDKLightningError *this_ptr);

/**
 * The action which should be taken against the offending peer.
 */
void LightningError_set_action(LDKLightningError *this_ptr, LDKErrorAction val);

MUST_USE_RES LDKLightningError LightningError_new(LDKCVec_u8Z err_arg, LDKErrorAction action_arg);

void CommitmentUpdate_free(LDKCommitmentUpdate this_ptr);

/**
 * update_add_htlc messages which should be sent
 */
void CommitmentUpdate_set_update_add_htlcs(LDKCommitmentUpdate *this_ptr, LDKCVec_UpdateAddHTLCZ val);

/**
 * update_fulfill_htlc messages which should be sent
 */
void CommitmentUpdate_set_update_fulfill_htlcs(LDKCommitmentUpdate *this_ptr, LDKCVec_UpdateFulfillHTLCZ val);

/**
 * update_fail_htlc messages which should be sent
 */
void CommitmentUpdate_set_update_fail_htlcs(LDKCommitmentUpdate *this_ptr, LDKCVec_UpdateFailHTLCZ val);

/**
 * update_fail_malformed_htlc messages which should be sent
 */
void CommitmentUpdate_set_update_fail_malformed_htlcs(LDKCommitmentUpdate *this_ptr, LDKCVec_UpdateFailMalformedHTLCZ val);

/**
 * An update_fee message which should be sent
 */
LDKUpdateFee CommitmentUpdate_get_update_fee(const LDKCommitmentUpdate *this_ptr);

/**
 * An update_fee message which should be sent
 */
void CommitmentUpdate_set_update_fee(LDKCommitmentUpdate *this_ptr, LDKUpdateFee val);

/**
 * Finally, the commitment_signed message which should be sent
 */
LDKCommitmentSigned CommitmentUpdate_get_commitment_signed(const LDKCommitmentUpdate *this_ptr);

/**
 * Finally, the commitment_signed message which should be sent
 */
void CommitmentUpdate_set_commitment_signed(LDKCommitmentUpdate *this_ptr, LDKCommitmentSigned val);

MUST_USE_RES LDKCommitmentUpdate CommitmentUpdate_new(LDKCVec_UpdateAddHTLCZ update_add_htlcs_arg, LDKCVec_UpdateFulfillHTLCZ update_fulfill_htlcs_arg, LDKCVec_UpdateFailHTLCZ update_fail_htlcs_arg, LDKCVec_UpdateFailMalformedHTLCZ update_fail_malformed_htlcs_arg, LDKUpdateFee update_fee_arg, LDKCommitmentSigned commitment_signed_arg);

void HTLCFailChannelUpdate_free(LDKHTLCFailChannelUpdate this_ptr);

/**
 * Calls the free function if one is set
 */
void ChannelMessageHandler_free(LDKChannelMessageHandler this_ptr);

/**
 * Calls the free function if one is set
 */
void RoutingMessageHandler_free(LDKRoutingMessageHandler this_ptr);

LDKCVec_u8Z AcceptChannel_write(const LDKAcceptChannel *obj);

LDKAcceptChannel AcceptChannel_read(LDKu8slice ser);

LDKCVec_u8Z AnnouncementSignatures_write(const LDKAnnouncementSignatures *obj);

LDKAnnouncementSignatures AnnouncementSignatures_read(LDKu8slice ser);

LDKCVec_u8Z ChannelReestablish_write(const LDKChannelReestablish *obj);

LDKChannelReestablish ChannelReestablish_read(LDKu8slice ser);

LDKCVec_u8Z ClosingSigned_write(const LDKClosingSigned *obj);

LDKClosingSigned ClosingSigned_read(LDKu8slice ser);

LDKCVec_u8Z CommitmentSigned_write(const LDKCommitmentSigned *obj);

LDKCommitmentSigned CommitmentSigned_read(LDKu8slice ser);

LDKCVec_u8Z FundingCreated_write(const LDKFundingCreated *obj);

LDKFundingCreated FundingCreated_read(LDKu8slice ser);

LDKCVec_u8Z FundingSigned_write(const LDKFundingSigned *obj);

LDKFundingSigned FundingSigned_read(LDKu8slice ser);

LDKCVec_u8Z FundingLocked_write(const LDKFundingLocked *obj);

LDKFundingLocked FundingLocked_read(LDKu8slice ser);

LDKCVec_u8Z Init_write(const LDKInit *obj);

LDKInit Init_read(LDKu8slice ser);

LDKCVec_u8Z OpenChannel_write(const LDKOpenChannel *obj);

LDKOpenChannel OpenChannel_read(LDKu8slice ser);

LDKCVec_u8Z RevokeAndACK_write(const LDKRevokeAndACK *obj);

LDKRevokeAndACK RevokeAndACK_read(LDKu8slice ser);

LDKCVec_u8Z Shutdown_write(const LDKShutdown *obj);

LDKShutdown Shutdown_read(LDKu8slice ser);

LDKCVec_u8Z UpdateFailHTLC_write(const LDKUpdateFailHTLC *obj);

LDKUpdateFailHTLC UpdateFailHTLC_read(LDKu8slice ser);

LDKCVec_u8Z UpdateFailMalformedHTLC_write(const LDKUpdateFailMalformedHTLC *obj);

LDKUpdateFailMalformedHTLC UpdateFailMalformedHTLC_read(LDKu8slice ser);

LDKCVec_u8Z UpdateFee_write(const LDKUpdateFee *obj);

LDKUpdateFee UpdateFee_read(LDKu8slice ser);

LDKCVec_u8Z UpdateFulfillHTLC_write(const LDKUpdateFulfillHTLC *obj);

LDKUpdateFulfillHTLC UpdateFulfillHTLC_read(LDKu8slice ser);

LDKCVec_u8Z UpdateAddHTLC_write(const LDKUpdateAddHTLC *obj);

LDKUpdateAddHTLC UpdateAddHTLC_read(LDKu8slice ser);

LDKCVec_u8Z Ping_write(const LDKPing *obj);

LDKPing Ping_read(LDKu8slice ser);

LDKCVec_u8Z Pong_write(const LDKPong *obj);

LDKPong Pong_read(LDKu8slice ser);

LDKCVec_u8Z UnsignedChannelAnnouncement_write(const LDKUnsignedChannelAnnouncement *obj);

LDKUnsignedChannelAnnouncement UnsignedChannelAnnouncement_read(LDKu8slice ser);

LDKCVec_u8Z ChannelAnnouncement_write(const LDKChannelAnnouncement *obj);

LDKChannelAnnouncement ChannelAnnouncement_read(LDKu8slice ser);

LDKCVec_u8Z UnsignedChannelUpdate_write(const LDKUnsignedChannelUpdate *obj);

LDKUnsignedChannelUpdate UnsignedChannelUpdate_read(LDKu8slice ser);

LDKCVec_u8Z ChannelUpdate_write(const LDKChannelUpdate *obj);

LDKChannelUpdate ChannelUpdate_read(LDKu8slice ser);

LDKCVec_u8Z ErrorMessage_write(const LDKErrorMessage *obj);

LDKErrorMessage ErrorMessage_read(LDKu8slice ser);

LDKCVec_u8Z UnsignedNodeAnnouncement_write(const LDKUnsignedNodeAnnouncement *obj);

LDKUnsignedNodeAnnouncement UnsignedNodeAnnouncement_read(LDKu8slice ser);

LDKCVec_u8Z NodeAnnouncement_write(const LDKNodeAnnouncement *obj);

LDKNodeAnnouncement NodeAnnouncement_read(LDKu8slice ser);

LDKQueryShortChannelIds QueryShortChannelIds_read(LDKu8slice ser);

LDKCVec_u8Z QueryShortChannelIds_write(const LDKQueryShortChannelIds *obj);

LDKReplyShortChannelIdsEnd ReplyShortChannelIdsEnd_read(LDKu8slice ser);

LDKCVec_u8Z ReplyShortChannelIdsEnd_write(const LDKReplyShortChannelIdsEnd *obj);

LDKQueryChannelRange QueryChannelRange_read(LDKu8slice ser);

LDKCVec_u8Z QueryChannelRange_write(const LDKQueryChannelRange *obj);

LDKReplyChannelRange ReplyChannelRange_read(LDKu8slice ser);

LDKCVec_u8Z ReplyChannelRange_write(const LDKReplyChannelRange *obj);

LDKGossipTimestampFilter GossipTimestampFilter_read(LDKu8slice ser);

LDKCVec_u8Z GossipTimestampFilter_write(const LDKGossipTimestampFilter *obj);

void MessageHandler_free(LDKMessageHandler this_ptr);

/**
 * A message handler which handles messages specific to channels. Usually this is just a
 * ChannelManager object.
 */
const LDKChannelMessageHandler *MessageHandler_get_chan_handler(const LDKMessageHandler *this_ptr);

/**
 * A message handler which handles messages specific to channels. Usually this is just a
 * ChannelManager object.
 */
void MessageHandler_set_chan_handler(LDKMessageHandler *this_ptr, LDKChannelMessageHandler val);

/**
 * A message handler which handles messages updating our knowledge of the network channel
 * graph. Usually this is just a NetGraphMsgHandlerMonitor object.
 */
const LDKRoutingMessageHandler *MessageHandler_get_route_handler(const LDKMessageHandler *this_ptr);

/**
 * A message handler which handles messages updating our knowledge of the network channel
 * graph. Usually this is just a NetGraphMsgHandlerMonitor object.
 */
void MessageHandler_set_route_handler(LDKMessageHandler *this_ptr, LDKRoutingMessageHandler val);

MUST_USE_RES LDKMessageHandler MessageHandler_new(LDKChannelMessageHandler chan_handler_arg, LDKRoutingMessageHandler route_handler_arg);

/**
 * Calls the free function if one is set
 */
void SocketDescriptor_free(LDKSocketDescriptor this_ptr);

void PeerHandleError_free(LDKPeerHandleError this_ptr);

/**
 * Used to indicate that we probably can't make any future connections to this peer, implying
 * we should go ahead and force-close any channels we have with it.
 */
bool PeerHandleError_get_no_connection_possible(const LDKPeerHandleError *this_ptr);

/**
 * Used to indicate that we probably can't make any future connections to this peer, implying
 * we should go ahead and force-close any channels we have with it.
 */
void PeerHandleError_set_no_connection_possible(LDKPeerHandleError *this_ptr, bool val);

MUST_USE_RES LDKPeerHandleError PeerHandleError_new(bool no_connection_possible_arg);

void PeerManager_free(LDKPeerManager this_ptr);

/**
 * Constructs a new PeerManager with the given message handlers and node_id secret key
 * ephemeral_random_data is used to derive per-connection ephemeral keys and must be
 * cryptographically secure random bytes.
 */
MUST_USE_RES LDKPeerManager PeerManager_new(LDKMessageHandler message_handler, LDKSecretKey our_node_secret, const uint8_t (*ephemeral_random_data)[32], LDKLogger logger);

/**
 * Get the list of node ids for peers which have completed the initial handshake.
 *
 * For outbound connections, this will be the same as the their_node_id parameter passed in to
 * new_outbound_connection, however entries will only appear once the initial handshake has
 * completed and we are sure the remote peer has the private key for the given node_id.
 */
MUST_USE_RES LDKCVec_PublicKeyZ PeerManager_get_peer_node_ids(const LDKPeerManager *this_arg);

/**
 * Indicates a new outbound connection has been established to a node with the given node_id.
 * Note that if an Err is returned here you MUST NOT call socket_disconnected for the new
 * descriptor but must disconnect the connection immediately.
 *
 * Returns a small number of bytes to send to the remote node (currently always 50).
 *
 * Panics if descriptor is duplicative with some other descriptor which has not yet had a
 * socket_disconnected().
 */
MUST_USE_RES LDKCResult_CVec_u8ZPeerHandleErrorZ PeerManager_new_outbound_connection(const LDKPeerManager *this_arg, LDKPublicKey their_node_id, LDKSocketDescriptor descriptor);

/**
 * Indicates a new inbound connection has been established.
 *
 * May refuse the connection by returning an Err, but will never write bytes to the remote end
 * (outbound connector always speaks first). Note that if an Err is returned here you MUST NOT
 * call socket_disconnected for the new descriptor but must disconnect the connection
 * immediately.
 *
 * Panics if descriptor is duplicative with some other descriptor which has not yet had
 * socket_disconnected called.
 */
MUST_USE_RES LDKCResult_NonePeerHandleErrorZ PeerManager_new_inbound_connection(const LDKPeerManager *this_arg, LDKSocketDescriptor descriptor);

/**
 * Indicates that there is room to write data to the given socket descriptor.
 *
 * May return an Err to indicate that the connection should be closed.
 *
 * Will most likely call send_data on the descriptor passed in (or the descriptor handed into
 * new_*\\_connection) before returning. Thus, be very careful with reentrancy issues! The
 * invariants around calling write_buffer_space_avail in case a write did not fully complete
 * must still hold - be ready to call write_buffer_space_avail again if a write call generated
 * here isn't sufficient! Panics if the descriptor was not previously registered in a
 * new_\\*_connection event.
 */
MUST_USE_RES LDKCResult_NonePeerHandleErrorZ PeerManager_write_buffer_space_avail(const LDKPeerManager *this_arg, LDKSocketDescriptor *descriptor);

/**
 * Indicates that data was read from the given socket descriptor.
 *
 * May return an Err to indicate that the connection should be closed.
 *
 * Will *not* call back into send_data on any descriptors to avoid reentrancy complexity.
 * Thus, however, you almost certainly want to call process_events() after any read_event to
 * generate send_data calls to handle responses.
 *
 * If Ok(true) is returned, further read_events should not be triggered until a send_data call
 * on this file descriptor has resume_read set (preventing DoS issues in the send buffer).
 *
 * Panics if the descriptor was not previously registered in a new_*_connection event.
 */
MUST_USE_RES LDKCResult_boolPeerHandleErrorZ PeerManager_read_event(const LDKPeerManager *this_arg, LDKSocketDescriptor *peer_descriptor, LDKu8slice data);

/**
 * Checks for any events generated by our handlers and processes them. Includes sending most
 * response messages as well as messages generated by calls to handler functions directly (eg
 * functions like ChannelManager::process_pending_htlc_forward or send_payment).
 */
void PeerManager_process_events(const LDKPeerManager *this_arg);

/**
 * Indicates that the given socket descriptor's connection is now closed.
 *
 * This must only be called if the socket has been disconnected by the peer or your own
 * decision to disconnect it and must NOT be called in any case where other parts of this
 * library (eg PeerHandleError, explicit disconnect_socket calls) instruct you to disconnect
 * the peer.
 *
 * Panics if the descriptor was not previously registered in a successful new_*_connection event.
 */
void PeerManager_socket_disconnected(const LDKPeerManager *this_arg, const LDKSocketDescriptor *descriptor);

/**
 * This function should be called roughly once every 30 seconds.
 * It will send pings to each peer and disconnect those which did not respond to the last round of pings.
 * Will most likely call send_data on all of the registered descriptors, thus, be very careful with reentrancy issues!
 */
void PeerManager_timer_tick_occured(const LDKPeerManager *this_arg);

/**
 * Build the commitment secret from the seed and the commitment number
 */
LDKThirtyTwoBytes build_commitment_secret(const uint8_t (*commitment_seed)[32], uint64_t idx);

/**
 * Derives a per-commitment-transaction private key (eg an htlc key or delayed_payment key)
 * from the base secret and the per_commitment_point.
 *
 * Note that this is infallible iff we trust that at least one of the two input keys are randomly
 * generated (ie our own).
 */
LDKCResult_SecretKeySecpErrorZ derive_private_key(LDKPublicKey per_commitment_point, const uint8_t (*base_secret)[32]);

/**
 * Derives a per-commitment-transaction public key (eg an htlc key or a delayed_payment key)
 * from the base point and the per_commitment_key. This is the public equivalent of
 * derive_private_key - using only public keys to derive a public key instead of private keys.
 *
 * Note that this is infallible iff we trust that at least one of the two input keys are randomly
 * generated (ie our own).
 */
LDKCResult_PublicKeySecpErrorZ derive_public_key(LDKPublicKey per_commitment_point, LDKPublicKey base_point);

/**
 * Derives a per-commitment-transaction revocation key from its constituent parts.
 *
 * Only the cheating participant owns a valid witness to propagate a revoked
 * commitment transaction, thus per_commitment_secret always come from cheater
 * and revocation_base_secret always come from punisher, which is the broadcaster
 * of the transaction spending with this key knowledge.
 *
 * Note that this is infallible iff we trust that at least one of the two input keys are randomly
 * generated (ie our own).
 */
LDKCResult_SecretKeySecpErrorZ derive_private_revocation_key(const uint8_t (*per_commitment_secret)[32], const uint8_t (*countersignatory_revocation_base_secret)[32]);

/**
 * Derives a per-commitment-transaction revocation public key from its constituent parts. This is
 * the public equivalend of derive_private_revocation_key - using only public keys to derive a
 * public key instead of private keys.
 *
 * Only the cheating participant owns a valid witness to propagate a revoked
 * commitment transaction, thus per_commitment_point always come from cheater
 * and revocation_base_point always come from punisher, which is the broadcaster
 * of the transaction spending with this key knowledge.
 *
 * Note that this is infallible iff we trust that at least one of the two input keys are randomly
 * generated (ie our own).
 */
LDKCResult_PublicKeySecpErrorZ derive_public_revocation_key(LDKPublicKey per_commitment_point, LDKPublicKey countersignatory_revocation_base_point);

void TxCreationKeys_free(LDKTxCreationKeys this_ptr);

/**
 * The broadcaster's per-commitment public key which was used to derive the other keys.
 */
LDKPublicKey TxCreationKeys_get_per_commitment_point(const LDKTxCreationKeys *this_ptr);

/**
 * The broadcaster's per-commitment public key which was used to derive the other keys.
 */
void TxCreationKeys_set_per_commitment_point(LDKTxCreationKeys *this_ptr, LDKPublicKey val);

/**
 * The revocation key which is used to allow the broadcaster of the commitment
 * transaction to provide their counterparty the ability to punish them if they broadcast
 * an old state.
 */
LDKPublicKey TxCreationKeys_get_revocation_key(const LDKTxCreationKeys *this_ptr);

/**
 * The revocation key which is used to allow the broadcaster of the commitment
 * transaction to provide their counterparty the ability to punish them if they broadcast
 * an old state.
 */
void TxCreationKeys_set_revocation_key(LDKTxCreationKeys *this_ptr, LDKPublicKey val);

/**
 * Broadcaster's HTLC Key
 */
LDKPublicKey TxCreationKeys_get_broadcaster_htlc_key(const LDKTxCreationKeys *this_ptr);

/**
 * Broadcaster's HTLC Key
 */
void TxCreationKeys_set_broadcaster_htlc_key(LDKTxCreationKeys *this_ptr, LDKPublicKey val);

/**
 * Countersignatory's HTLC Key
 */
LDKPublicKey TxCreationKeys_get_countersignatory_htlc_key(const LDKTxCreationKeys *this_ptr);

/**
 * Countersignatory's HTLC Key
 */
void TxCreationKeys_set_countersignatory_htlc_key(LDKTxCreationKeys *this_ptr, LDKPublicKey val);

/**
 * Broadcaster's Payment Key (which isn't allowed to be spent from for some delay)
 */
LDKPublicKey TxCreationKeys_get_broadcaster_delayed_payment_key(const LDKTxCreationKeys *this_ptr);

/**
 * Broadcaster's Payment Key (which isn't allowed to be spent from for some delay)
 */
void TxCreationKeys_set_broadcaster_delayed_payment_key(LDKTxCreationKeys *this_ptr, LDKPublicKey val);

MUST_USE_RES LDKTxCreationKeys TxCreationKeys_new(LDKPublicKey per_commitment_point_arg, LDKPublicKey revocation_key_arg, LDKPublicKey broadcaster_htlc_key_arg, LDKPublicKey countersignatory_htlc_key_arg, LDKPublicKey broadcaster_delayed_payment_key_arg);

LDKCVec_u8Z TxCreationKeys_write(const LDKTxCreationKeys *obj);

LDKTxCreationKeys TxCreationKeys_read(LDKu8slice ser);

void PreCalculatedTxCreationKeys_free(LDKPreCalculatedTxCreationKeys this_ptr);

/**
 * Create a new PreCalculatedTxCreationKeys from TxCreationKeys
 */
MUST_USE_RES LDKPreCalculatedTxCreationKeys PreCalculatedTxCreationKeys_new(LDKTxCreationKeys keys);

/**
 * The pre-calculated transaction creation public keys.
 * An external validating signer should not trust these keys.
 */
MUST_USE_RES LDKTxCreationKeys PreCalculatedTxCreationKeys_trust_key_derivation(const LDKPreCalculatedTxCreationKeys *this_arg);

/**
 * The transaction per-commitment point
 */
MUST_USE_RES LDKPublicKey PreCalculatedTxCreationKeys_per_commitment_point(const LDKPreCalculatedTxCreationKeys *this_arg);

void ChannelPublicKeys_free(LDKChannelPublicKeys this_ptr);

/**
 * The public key which is used to sign all commitment transactions, as it appears in the
 * on-chain channel lock-in 2-of-2 multisig output.
 */
LDKPublicKey ChannelPublicKeys_get_funding_pubkey(const LDKChannelPublicKeys *this_ptr);

/**
 * The public key which is used to sign all commitment transactions, as it appears in the
 * on-chain channel lock-in 2-of-2 multisig output.
 */
void ChannelPublicKeys_set_funding_pubkey(LDKChannelPublicKeys *this_ptr, LDKPublicKey val);

/**
 * The base point which is used (with derive_public_revocation_key) to derive per-commitment
 * revocation keys. This is combined with the per-commitment-secret generated by the
 * counterparty to create a secret which the counterparty can reveal to revoke previous
 * states.
 */
LDKPublicKey ChannelPublicKeys_get_revocation_basepoint(const LDKChannelPublicKeys *this_ptr);

/**
 * The base point which is used (with derive_public_revocation_key) to derive per-commitment
 * revocation keys. This is combined with the per-commitment-secret generated by the
 * counterparty to create a secret which the counterparty can reveal to revoke previous
 * states.
 */
void ChannelPublicKeys_set_revocation_basepoint(LDKChannelPublicKeys *this_ptr, LDKPublicKey val);

/**
 * The public key on which the non-broadcaster (ie the countersignatory) receives an immediately
 * spendable primary channel balance on the broadcaster's commitment transaction. This key is
 * static across every commitment transaction.
 */
LDKPublicKey ChannelPublicKeys_get_payment_point(const LDKChannelPublicKeys *this_ptr);

/**
 * The public key on which the non-broadcaster (ie the countersignatory) receives an immediately
 * spendable primary channel balance on the broadcaster's commitment transaction. This key is
 * static across every commitment transaction.
 */
void ChannelPublicKeys_set_payment_point(LDKChannelPublicKeys *this_ptr, LDKPublicKey val);

/**
 * The base point which is used (with derive_public_key) to derive a per-commitment payment
 * public key which receives non-HTLC-encumbered funds which are only available for spending
 * after some delay (or can be claimed via the revocation path).
 */
LDKPublicKey ChannelPublicKeys_get_delayed_payment_basepoint(const LDKChannelPublicKeys *this_ptr);

/**
 * The base point which is used (with derive_public_key) to derive a per-commitment payment
 * public key which receives non-HTLC-encumbered funds which are only available for spending
 * after some delay (or can be claimed via the revocation path).
 */
void ChannelPublicKeys_set_delayed_payment_basepoint(LDKChannelPublicKeys *this_ptr, LDKPublicKey val);

/**
 * The base point which is used (with derive_public_key) to derive a per-commitment public key
 * which is used to encumber HTLC-in-flight outputs.
 */
LDKPublicKey ChannelPublicKeys_get_htlc_basepoint(const LDKChannelPublicKeys *this_ptr);

/**
 * The base point which is used (with derive_public_key) to derive a per-commitment public key
 * which is used to encumber HTLC-in-flight outputs.
 */
void ChannelPublicKeys_set_htlc_basepoint(LDKChannelPublicKeys *this_ptr, LDKPublicKey val);

MUST_USE_RES LDKChannelPublicKeys ChannelPublicKeys_new(LDKPublicKey funding_pubkey_arg, LDKPublicKey revocation_basepoint_arg, LDKPublicKey payment_point_arg, LDKPublicKey delayed_payment_basepoint_arg, LDKPublicKey htlc_basepoint_arg);

LDKCVec_u8Z ChannelPublicKeys_write(const LDKChannelPublicKeys *obj);

LDKChannelPublicKeys ChannelPublicKeys_read(LDKu8slice ser);

/**
 * Create a new TxCreationKeys from channel base points and the per-commitment point
 */
MUST_USE_RES LDKCResult_TxCreationKeysSecpErrorZ TxCreationKeys_derive_new(LDKPublicKey per_commitment_point, LDKPublicKey broadcaster_delayed_payment_base, LDKPublicKey broadcaster_htlc_base, LDKPublicKey countersignatory_revocation_base, LDKPublicKey countersignatory_htlc_base);

/**
 * A script either spendable by the revocation
 * key or the broadcaster_delayed_payment_key and satisfying the relative-locktime OP_CSV constrain.
 * Encumbering a `to_holder` output on a commitment transaction or 2nd-stage HTLC transactions.
 */
LDKCVec_u8Z get_revokeable_redeemscript(LDKPublicKey revocation_key, uint16_t contest_delay, LDKPublicKey broadcaster_delayed_payment_key);

void HTLCOutputInCommitment_free(LDKHTLCOutputInCommitment this_ptr);

/**
 * Whether the HTLC was \"offered\" (ie outbound in relation to this commitment transaction).
 * Note that this is not the same as whether it is ountbound *from us*. To determine that you
 * need to compare this value to whether the commitment transaction in question is that of
 * the counterparty or our own.
 */
bool HTLCOutputInCommitment_get_offered(const LDKHTLCOutputInCommitment *this_ptr);

/**
 * Whether the HTLC was \"offered\" (ie outbound in relation to this commitment transaction).
 * Note that this is not the same as whether it is ountbound *from us*. To determine that you
 * need to compare this value to whether the commitment transaction in question is that of
 * the counterparty or our own.
 */
void HTLCOutputInCommitment_set_offered(LDKHTLCOutputInCommitment *this_ptr, bool val);

/**
 * The value, in msat, of the HTLC. The value as it appears in the commitment transaction is
 * this divided by 1000.
 */
uint64_t HTLCOutputInCommitment_get_amount_msat(const LDKHTLCOutputInCommitment *this_ptr);

/**
 * The value, in msat, of the HTLC. The value as it appears in the commitment transaction is
 * this divided by 1000.
 */
void HTLCOutputInCommitment_set_amount_msat(LDKHTLCOutputInCommitment *this_ptr, uint64_t val);

/**
 * The CLTV lock-time at which this HTLC expires.
 */
uint32_t HTLCOutputInCommitment_get_cltv_expiry(const LDKHTLCOutputInCommitment *this_ptr);

/**
 * The CLTV lock-time at which this HTLC expires.
 */
void HTLCOutputInCommitment_set_cltv_expiry(LDKHTLCOutputInCommitment *this_ptr, uint32_t val);

/**
 * The hash of the preimage which unlocks this HTLC.
 */
const uint8_t (*HTLCOutputInCommitment_get_payment_hash(const LDKHTLCOutputInCommitment *this_ptr))[32];

/**
 * The hash of the preimage which unlocks this HTLC.
 */
void HTLCOutputInCommitment_set_payment_hash(LDKHTLCOutputInCommitment *this_ptr, LDKThirtyTwoBytes val);

LDKCVec_u8Z HTLCOutputInCommitment_write(const LDKHTLCOutputInCommitment *obj);

LDKHTLCOutputInCommitment HTLCOutputInCommitment_read(LDKu8slice ser);

/**
 * Gets the witness redeemscript for an HTLC output in a commitment transaction. Note that htlc
 * does not need to have its previous_output_index filled.
 */
LDKCVec_u8Z get_htlc_redeemscript(const LDKHTLCOutputInCommitment *htlc, const LDKTxCreationKeys *keys);

/**
 * Gets the redeemscript for a funding output from the two funding public keys.
 * Note that the order of funding public keys does not matter.
 */
LDKCVec_u8Z make_funding_redeemscript(LDKPublicKey broadcaster, LDKPublicKey countersignatory);

/**
 * panics if htlc.transaction_output_index.is_none()!
 */
LDKTransaction build_htlc_transaction(const uint8_t (*prev_hash)[32], uint32_t feerate_per_kw, uint16_t contest_delay, const LDKHTLCOutputInCommitment *htlc, LDKPublicKey broadcaster_delayed_payment_key, LDKPublicKey revocation_key);

void HolderCommitmentTransaction_free(LDKHolderCommitmentTransaction this_ptr);

/**
 * The commitment transaction itself, in unsigned form.
 */
LDKTransaction HolderCommitmentTransaction_get_unsigned_tx(const LDKHolderCommitmentTransaction *this_ptr);

/**
 * The commitment transaction itself, in unsigned form.
 */
void HolderCommitmentTransaction_set_unsigned_tx(LDKHolderCommitmentTransaction *this_ptr, LDKTransaction val);

/**
 * Our counterparty's signature for the transaction, above.
 */
LDKSignature HolderCommitmentTransaction_get_counterparty_sig(const LDKHolderCommitmentTransaction *this_ptr);

/**
 * Our counterparty's signature for the transaction, above.
 */
void HolderCommitmentTransaction_set_counterparty_sig(LDKHolderCommitmentTransaction *this_ptr, LDKSignature val);

/**
 * The feerate paid per 1000-weight-unit in this commitment transaction. This value is
 * controlled by the channel initiator.
 */
uint32_t HolderCommitmentTransaction_get_feerate_per_kw(const LDKHolderCommitmentTransaction *this_ptr);

/**
 * The feerate paid per 1000-weight-unit in this commitment transaction. This value is
 * controlled by the channel initiator.
 */
void HolderCommitmentTransaction_set_feerate_per_kw(LDKHolderCommitmentTransaction *this_ptr, uint32_t val);

/**
 * The HTLCs and counterparty htlc signatures which were included in this commitment transaction.
 *
 * Note that this includes all HTLCs, including ones which were considered dust and not
 * actually included in the transaction as it appears on-chain, but who's value is burned as
 * fees and not included in the to_holder or to_counterparty outputs.
 *
 * The counterparty HTLC signatures in the second element will always be set for non-dust HTLCs, ie
 * those for which transaction_output_index.is_some().
 */
void HolderCommitmentTransaction_set_per_htlc(LDKHolderCommitmentTransaction *this_ptr, LDKCVec_C2Tuple_HTLCOutputInCommitmentSignatureZZ val);

/**
 * Generate a new HolderCommitmentTransaction based on a raw commitment transaction,
 * counterparty signature and both parties keys.
 *
 * The unsigned transaction outputs must be consistent with htlc_data.  This function
 * only checks that the shape and amounts are consistent, but does not check the scriptPubkey.
 */
MUST_USE_RES LDKHolderCommitmentTransaction HolderCommitmentTransaction_new_missing_holder_sig(LDKTransaction unsigned_tx, LDKSignature counterparty_sig, LDKPublicKey holder_funding_key, LDKPublicKey counterparty_funding_key, LDKTxCreationKeys keys, uint32_t feerate_per_kw, LDKCVec_C2Tuple_HTLCOutputInCommitmentSignatureZZ htlc_data);

/**
 * The pre-calculated transaction creation public keys.
 * An external validating signer should not trust these keys.
 */
MUST_USE_RES LDKTxCreationKeys HolderCommitmentTransaction_trust_key_derivation(const LDKHolderCommitmentTransaction *this_arg);

/**
 * Get the txid of the holder commitment transaction contained in this
 * HolderCommitmentTransaction
 */
MUST_USE_RES LDKThirtyTwoBytes HolderCommitmentTransaction_txid(const LDKHolderCommitmentTransaction *this_arg);

/**
 * Gets holder signature for the contained commitment transaction given holder funding private key.
 *
 * Funding key is your key included in the 2-2 funding_outpoint lock. Should be provided
 * by your ChannelKeys.
 * Funding redeemscript is script locking funding_outpoint. This is the mutlsig script
 * between your own funding key and your counterparty's. Currently, this is provided in
 * ChannelKeys::sign_holder_commitment() calls directly.
 * Channel value is amount locked in funding_outpoint.
 */
MUST_USE_RES LDKSignature HolderCommitmentTransaction_get_holder_sig(const LDKHolderCommitmentTransaction *this_arg, const uint8_t (*funding_key)[32], LDKu8slice funding_redeemscript, uint64_t channel_value_satoshis);

/**
 * Get a signature for each HTLC which was included in the commitment transaction (ie for
 * which HTLCOutputInCommitment::transaction_output_index.is_some()).
 *
 * The returned Vec has one entry for each HTLC, and in the same order. For HTLCs which were
 * considered dust and not included, a None entry exists, for all others a signature is
 * included.
 */
MUST_USE_RES LDKCResult_CVec_SignatureZNoneZ HolderCommitmentTransaction_get_htlc_sigs(const LDKHolderCommitmentTransaction *this_arg, const uint8_t (*htlc_base_key)[32], uint16_t counterparty_selected_contest_delay);

LDKCVec_u8Z HolderCommitmentTransaction_write(const LDKHolderCommitmentTransaction *obj);

LDKHolderCommitmentTransaction HolderCommitmentTransaction_read(LDKu8slice ser);

void InitFeatures_free(LDKInitFeatures this_ptr);

void NodeFeatures_free(LDKNodeFeatures this_ptr);

void ChannelFeatures_free(LDKChannelFeatures this_ptr);

void RouteHop_free(LDKRouteHop this_ptr);

/**
 * The node_id of the node at this hop.
 */
LDKPublicKey RouteHop_get_pubkey(const LDKRouteHop *this_ptr);

/**
 * The node_id of the node at this hop.
 */
void RouteHop_set_pubkey(LDKRouteHop *this_ptr, LDKPublicKey val);

/**
 * The node_announcement features of the node at this hop. For the last hop, these may be
 * amended to match the features present in the invoice this node generated.
 */
LDKNodeFeatures RouteHop_get_node_features(const LDKRouteHop *this_ptr);

/**
 * The node_announcement features of the node at this hop. For the last hop, these may be
 * amended to match the features present in the invoice this node generated.
 */
void RouteHop_set_node_features(LDKRouteHop *this_ptr, LDKNodeFeatures val);

/**
 * The channel that should be used from the previous hop to reach this node.
 */
uint64_t RouteHop_get_short_channel_id(const LDKRouteHop *this_ptr);

/**
 * The channel that should be used from the previous hop to reach this node.
 */
void RouteHop_set_short_channel_id(LDKRouteHop *this_ptr, uint64_t val);

/**
 * The channel_announcement features of the channel that should be used from the previous hop
 * to reach this node.
 */
LDKChannelFeatures RouteHop_get_channel_features(const LDKRouteHop *this_ptr);

/**
 * The channel_announcement features of the channel that should be used from the previous hop
 * to reach this node.
 */
void RouteHop_set_channel_features(LDKRouteHop *this_ptr, LDKChannelFeatures val);

/**
 * The fee taken on this hop. For the last hop, this should be the full value of the payment.
 */
uint64_t RouteHop_get_fee_msat(const LDKRouteHop *this_ptr);

/**
 * The fee taken on this hop. For the last hop, this should be the full value of the payment.
 */
void RouteHop_set_fee_msat(LDKRouteHop *this_ptr, uint64_t val);

/**
 * The CLTV delta added for this hop. For the last hop, this should be the full CLTV value
 * expected at the destination, in excess of the current block height.
 */
uint32_t RouteHop_get_cltv_expiry_delta(const LDKRouteHop *this_ptr);

/**
 * The CLTV delta added for this hop. For the last hop, this should be the full CLTV value
 * expected at the destination, in excess of the current block height.
 */
void RouteHop_set_cltv_expiry_delta(LDKRouteHop *this_ptr, uint32_t val);

MUST_USE_RES LDKRouteHop RouteHop_new(LDKPublicKey pubkey_arg, LDKNodeFeatures node_features_arg, uint64_t short_channel_id_arg, LDKChannelFeatures channel_features_arg, uint64_t fee_msat_arg, uint32_t cltv_expiry_delta_arg);

void Route_free(LDKRoute this_ptr);

/**
 * The list of routes taken for a single (potentially-)multi-part payment. The pubkey of the
 * last RouteHop in each path must be the same.
 * Each entry represents a list of hops, NOT INCLUDING our own, where the last hop is the
 * destination. Thus, this must always be at least length one. While the maximum length of any
 * given path is variable, keeping the length of any path to less than 20 should currently
 * ensure it is viable.
 */
void Route_set_paths(LDKRoute *this_ptr, LDKCVec_CVec_RouteHopZZ val);

MUST_USE_RES LDKRoute Route_new(LDKCVec_CVec_RouteHopZZ paths_arg);

LDKCVec_u8Z Route_write(const LDKRoute *obj);

LDKRoute Route_read(LDKu8slice ser);

void RouteHint_free(LDKRouteHint this_ptr);

/**
 * The node_id of the non-target end of the route
 */
LDKPublicKey RouteHint_get_src_node_id(const LDKRouteHint *this_ptr);

/**
 * The node_id of the non-target end of the route
 */
void RouteHint_set_src_node_id(LDKRouteHint *this_ptr, LDKPublicKey val);

/**
 * The short_channel_id of this channel
 */
uint64_t RouteHint_get_short_channel_id(const LDKRouteHint *this_ptr);

/**
 * The short_channel_id of this channel
 */
void RouteHint_set_short_channel_id(LDKRouteHint *this_ptr, uint64_t val);

/**
 * The fees which must be paid to use this channel
 */
LDKRoutingFees RouteHint_get_fees(const LDKRouteHint *this_ptr);

/**
 * The fees which must be paid to use this channel
 */
void RouteHint_set_fees(LDKRouteHint *this_ptr, LDKRoutingFees val);

/**
 * The difference in CLTV values between this node and the next node.
 */
uint16_t RouteHint_get_cltv_expiry_delta(const LDKRouteHint *this_ptr);

/**
 * The difference in CLTV values between this node and the next node.
 */
void RouteHint_set_cltv_expiry_delta(LDKRouteHint *this_ptr, uint16_t val);

/**
 * The minimum value, in msat, which must be relayed to the next hop.
 */
uint64_t RouteHint_get_htlc_minimum_msat(const LDKRouteHint *this_ptr);

/**
 * The minimum value, in msat, which must be relayed to the next hop.
 */
void RouteHint_set_htlc_minimum_msat(LDKRouteHint *this_ptr, uint64_t val);

MUST_USE_RES LDKRouteHint RouteHint_new(LDKPublicKey src_node_id_arg, uint64_t short_channel_id_arg, LDKRoutingFees fees_arg, uint16_t cltv_expiry_delta_arg, uint64_t htlc_minimum_msat_arg);

/**
 * Gets a route from us to the given target node.
 *
 * Extra routing hops between known nodes and the target will be used if they are included in
 * last_hops.
 *
 * If some channels aren't announced, it may be useful to fill in a first_hops with the
 * results from a local ChannelManager::list_usable_channels() call. If it is filled in, our
 * view of our local channels (from net_graph_msg_handler) will be ignored, and only those in first_hops
 * will be used.
 *
 * Panics if first_hops contains channels without short_channel_ids
 * (ChannelManager::list_usable_channels will never include such channels).
 *
 * The fees on channels from us to next-hops are ignored (as they are assumed to all be
 * equal), however the enabled/disabled bit on such channels as well as the htlc_minimum_msat
 * *is* checked as they may change based on the receiving node.
 */
LDKCResult_RouteLightningErrorZ get_route(LDKPublicKey our_node_id, const LDKNetworkGraph *network, LDKPublicKey target, LDKCVec_ChannelDetailsZ *first_hops, LDKCVec_RouteHintZ last_hops, uint64_t final_value_msat, uint32_t final_cltv, LDKLogger logger);

void NetworkGraph_free(LDKNetworkGraph this_ptr);

void LockedNetworkGraph_free(LDKLockedNetworkGraph this_ptr);

void NetGraphMsgHandler_free(LDKNetGraphMsgHandler this_ptr);

/**
 * Creates a new tracker of the actual state of the network of channels and nodes,
 * assuming a fresh network graph.
 * Chain monitor is used to make sure announced channels exist on-chain,
 * channel data is correct, and that the announcement is signed with
 * channel owners' keys.
 */
MUST_USE_RES LDKNetGraphMsgHandler NetGraphMsgHandler_new(LDKAccess *chain_access, LDKLogger logger);

/**
 * Creates a new tracker of the actual state of the network of channels and nodes,
 * assuming an existing Network Graph.
 */
MUST_USE_RES LDKNetGraphMsgHandler NetGraphMsgHandler_from_net_graph(LDKAccess *chain_access, LDKLogger logger, LDKNetworkGraph network_graph);

/**
 * Take a read lock on the network_graph and return it in the C-bindings
 * newtype helper. This is likely only useful when called via the C
 * bindings as you can call `self.network_graph.read().unwrap()` in Rust
 * yourself.
 */
MUST_USE_RES LDKLockedNetworkGraph NetGraphMsgHandler_read_locked_graph(const LDKNetGraphMsgHandler *this_arg);

/**
 * Get a reference to the NetworkGraph which this read-lock contains.
 */
MUST_USE_RES LDKNetworkGraph LockedNetworkGraph_graph(const LDKLockedNetworkGraph *this_arg);

LDKRoutingMessageHandler NetGraphMsgHandler_as_RoutingMessageHandler(const LDKNetGraphMsgHandler *this_arg);

void DirectionalChannelInfo_free(LDKDirectionalChannelInfo this_ptr);

/**
 * When the last update to the channel direction was issued.
 * Value is opaque, as set in the announcement.
 */
uint32_t DirectionalChannelInfo_get_last_update(const LDKDirectionalChannelInfo *this_ptr);

/**
 * When the last update to the channel direction was issued.
 * Value is opaque, as set in the announcement.
 */
void DirectionalChannelInfo_set_last_update(LDKDirectionalChannelInfo *this_ptr, uint32_t val);

/**
 * Whether the channel can be currently used for payments (in this one direction).
 */
bool DirectionalChannelInfo_get_enabled(const LDKDirectionalChannelInfo *this_ptr);

/**
 * Whether the channel can be currently used for payments (in this one direction).
 */
void DirectionalChannelInfo_set_enabled(LDKDirectionalChannelInfo *this_ptr, bool val);

/**
 * The difference in CLTV values that you must have when routing through this channel.
 */
uint16_t DirectionalChannelInfo_get_cltv_expiry_delta(const LDKDirectionalChannelInfo *this_ptr);

/**
 * The difference in CLTV values that you must have when routing through this channel.
 */
void DirectionalChannelInfo_set_cltv_expiry_delta(LDKDirectionalChannelInfo *this_ptr, uint16_t val);

/**
 * The minimum value, which must be relayed to the next hop via the channel
 */
uint64_t DirectionalChannelInfo_get_htlc_minimum_msat(const LDKDirectionalChannelInfo *this_ptr);

/**
 * The minimum value, which must be relayed to the next hop via the channel
 */
void DirectionalChannelInfo_set_htlc_minimum_msat(LDKDirectionalChannelInfo *this_ptr, uint64_t val);

/**
 * Most recent update for the channel received from the network
 * Mostly redundant with the data we store in fields explicitly.
 * Everything else is useful only for sending out for initial routing sync.
 * Not stored if contains excess data to prevent DoS.
 */
LDKChannelUpdate DirectionalChannelInfo_get_last_update_message(const LDKDirectionalChannelInfo *this_ptr);

/**
 * Most recent update for the channel received from the network
 * Mostly redundant with the data we store in fields explicitly.
 * Everything else is useful only for sending out for initial routing sync.
 * Not stored if contains excess data to prevent DoS.
 */
void DirectionalChannelInfo_set_last_update_message(LDKDirectionalChannelInfo *this_ptr, LDKChannelUpdate val);

LDKCVec_u8Z DirectionalChannelInfo_write(const LDKDirectionalChannelInfo *obj);

LDKDirectionalChannelInfo DirectionalChannelInfo_read(LDKu8slice ser);

void ChannelInfo_free(LDKChannelInfo this_ptr);

/**
 * Protocol features of a channel communicated during its announcement
 */
LDKChannelFeatures ChannelInfo_get_features(const LDKChannelInfo *this_ptr);

/**
 * Protocol features of a channel communicated during its announcement
 */
void ChannelInfo_set_features(LDKChannelInfo *this_ptr, LDKChannelFeatures val);

/**
 * Source node of the first direction of a channel
 */
LDKPublicKey ChannelInfo_get_node_one(const LDKChannelInfo *this_ptr);

/**
 * Source node of the first direction of a channel
 */
void ChannelInfo_set_node_one(LDKChannelInfo *this_ptr, LDKPublicKey val);

/**
 * Details about the first direction of a channel
 */
LDKDirectionalChannelInfo ChannelInfo_get_one_to_two(const LDKChannelInfo *this_ptr);

/**
 * Details about the first direction of a channel
 */
void ChannelInfo_set_one_to_two(LDKChannelInfo *this_ptr, LDKDirectionalChannelInfo val);

/**
 * Source node of the second direction of a channel
 */
LDKPublicKey ChannelInfo_get_node_two(const LDKChannelInfo *this_ptr);

/**
 * Source node of the second direction of a channel
 */
void ChannelInfo_set_node_two(LDKChannelInfo *this_ptr, LDKPublicKey val);

/**
 * Details about the second direction of a channel
 */
LDKDirectionalChannelInfo ChannelInfo_get_two_to_one(const LDKChannelInfo *this_ptr);

/**
 * Details about the second direction of a channel
 */
void ChannelInfo_set_two_to_one(LDKChannelInfo *this_ptr, LDKDirectionalChannelInfo val);

/**
 * An initial announcement of the channel
 * Mostly redundant with the data we store in fields explicitly.
 * Everything else is useful only for sending out for initial routing sync.
 * Not stored if contains excess data to prevent DoS.
 */
LDKChannelAnnouncement ChannelInfo_get_announcement_message(const LDKChannelInfo *this_ptr);

/**
 * An initial announcement of the channel
 * Mostly redundant with the data we store in fields explicitly.
 * Everything else is useful only for sending out for initial routing sync.
 * Not stored if contains excess data to prevent DoS.
 */
void ChannelInfo_set_announcement_message(LDKChannelInfo *this_ptr, LDKChannelAnnouncement val);

LDKCVec_u8Z ChannelInfo_write(const LDKChannelInfo *obj);

LDKChannelInfo ChannelInfo_read(LDKu8slice ser);

void RoutingFees_free(LDKRoutingFees this_ptr);

/**
 * Flat routing fee in satoshis
 */
uint32_t RoutingFees_get_base_msat(const LDKRoutingFees *this_ptr);

/**
 * Flat routing fee in satoshis
 */
void RoutingFees_set_base_msat(LDKRoutingFees *this_ptr, uint32_t val);

/**
 * Liquidity-based routing fee in millionths of a routed amount.
 * In other words, 10000 is 1%.
 */
uint32_t RoutingFees_get_proportional_millionths(const LDKRoutingFees *this_ptr);

/**
 * Liquidity-based routing fee in millionths of a routed amount.
 * In other words, 10000 is 1%.
 */
void RoutingFees_set_proportional_millionths(LDKRoutingFees *this_ptr, uint32_t val);

MUST_USE_RES LDKRoutingFees RoutingFees_new(uint32_t base_msat_arg, uint32_t proportional_millionths_arg);

LDKRoutingFees RoutingFees_read(LDKu8slice ser);

LDKCVec_u8Z RoutingFees_write(const LDKRoutingFees *obj);

void NodeAnnouncementInfo_free(LDKNodeAnnouncementInfo this_ptr);

/**
 * Protocol features the node announced support for
 */
LDKNodeFeatures NodeAnnouncementInfo_get_features(const LDKNodeAnnouncementInfo *this_ptr);

/**
 * Protocol features the node announced support for
 */
void NodeAnnouncementInfo_set_features(LDKNodeAnnouncementInfo *this_ptr, LDKNodeFeatures val);

/**
 * When the last known update to the node state was issued.
 * Value is opaque, as set in the announcement.
 */
uint32_t NodeAnnouncementInfo_get_last_update(const LDKNodeAnnouncementInfo *this_ptr);

/**
 * When the last known update to the node state was issued.
 * Value is opaque, as set in the announcement.
 */
void NodeAnnouncementInfo_set_last_update(LDKNodeAnnouncementInfo *this_ptr, uint32_t val);

/**
 * Color assigned to the node
 */
const uint8_t (*NodeAnnouncementInfo_get_rgb(const LDKNodeAnnouncementInfo *this_ptr))[3];

/**
 * Color assigned to the node
 */
void NodeAnnouncementInfo_set_rgb(LDKNodeAnnouncementInfo *this_ptr, LDKThreeBytes val);

/**
 * Moniker assigned to the node.
 * May be invalid or malicious (eg control chars),
 * should not be exposed to the user.
 */
const uint8_t (*NodeAnnouncementInfo_get_alias(const LDKNodeAnnouncementInfo *this_ptr))[32];

/**
 * Moniker assigned to the node.
 * May be invalid or malicious (eg control chars),
 * should not be exposed to the user.
 */
void NodeAnnouncementInfo_set_alias(LDKNodeAnnouncementInfo *this_ptr, LDKThirtyTwoBytes val);

/**
 * Internet-level addresses via which one can connect to the node
 */
void NodeAnnouncementInfo_set_addresses(LDKNodeAnnouncementInfo *this_ptr, LDKCVec_NetAddressZ val);

/**
 * An initial announcement of the node
 * Mostly redundant with the data we store in fields explicitly.
 * Everything else is useful only for sending out for initial routing sync.
 * Not stored if contains excess data to prevent DoS.
 */
LDKNodeAnnouncement NodeAnnouncementInfo_get_announcement_message(const LDKNodeAnnouncementInfo *this_ptr);

/**
 * An initial announcement of the node
 * Mostly redundant with the data we store in fields explicitly.
 * Everything else is useful only for sending out for initial routing sync.
 * Not stored if contains excess data to prevent DoS.
 */
void NodeAnnouncementInfo_set_announcement_message(LDKNodeAnnouncementInfo *this_ptr, LDKNodeAnnouncement val);

MUST_USE_RES LDKNodeAnnouncementInfo NodeAnnouncementInfo_new(LDKNodeFeatures features_arg, uint32_t last_update_arg, LDKThreeBytes rgb_arg, LDKThirtyTwoBytes alias_arg, LDKCVec_NetAddressZ addresses_arg, LDKNodeAnnouncement announcement_message_arg);

LDKCVec_u8Z NodeAnnouncementInfo_write(const LDKNodeAnnouncementInfo *obj);

LDKNodeAnnouncementInfo NodeAnnouncementInfo_read(LDKu8slice ser);

void NodeInfo_free(LDKNodeInfo this_ptr);

/**
 * All valid channels a node has announced
 */
void NodeInfo_set_channels(LDKNodeInfo *this_ptr, LDKCVec_u64Z val);

/**
 * Lowest fees enabling routing via any of the enabled, known channels to a node.
 * The two fields (flat and proportional fee) are independent,
 * meaning they don't have to refer to the same channel.
 */
LDKRoutingFees NodeInfo_get_lowest_inbound_channel_fees(const LDKNodeInfo *this_ptr);

/**
 * Lowest fees enabling routing via any of the enabled, known channels to a node.
 * The two fields (flat and proportional fee) are independent,
 * meaning they don't have to refer to the same channel.
 */
void NodeInfo_set_lowest_inbound_channel_fees(LDKNodeInfo *this_ptr, LDKRoutingFees val);

/**
 * More information about a node from node_announcement.
 * Optional because we store a Node entry after learning about it from
 * a channel announcement, but before receiving a node announcement.
 */
LDKNodeAnnouncementInfo NodeInfo_get_announcement_info(const LDKNodeInfo *this_ptr);

/**
 * More information about a node from node_announcement.
 * Optional because we store a Node entry after learning about it from
 * a channel announcement, but before receiving a node announcement.
 */
void NodeInfo_set_announcement_info(LDKNodeInfo *this_ptr, LDKNodeAnnouncementInfo val);

MUST_USE_RES LDKNodeInfo NodeInfo_new(LDKCVec_u64Z channels_arg, LDKRoutingFees lowest_inbound_channel_fees_arg, LDKNodeAnnouncementInfo announcement_info_arg);

LDKCVec_u8Z NodeInfo_write(const LDKNodeInfo *obj);

LDKNodeInfo NodeInfo_read(LDKu8slice ser);

LDKCVec_u8Z NetworkGraph_write(const LDKNetworkGraph *obj);

LDKNetworkGraph NetworkGraph_read(LDKu8slice ser);

/**
 * Creates a new, empty, network graph.
 */
MUST_USE_RES LDKNetworkGraph NetworkGraph_new(void);

/**
 * Close a channel if a corresponding HTLC fail was sent.
 * If permanent, removes a channel from the local storage.
 * May cause the removal of nodes too, if this was their last channel.
 * If not permanent, makes channels unavailable for routing.
 */
void NetworkGraph_close_channel_from_update(LDKNetworkGraph *this_arg, uint64_t short_channel_id, bool is_permanent);

/* Text to put at the end of the generated file */
