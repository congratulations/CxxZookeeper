// File generated by hadoop record compiler. Do not edit.

#ifndef STATPERSISTED_HH_
#define STATPERSISTED_HH_

#include "Efc.hh"
#include "../../jute/inc/ERecord.hh"
#include "../../jute/inc/EBinaryInputArchive.hh"
#include "../../jute/inc/EBinaryOutputArchive.hh"
#include "../../jute/inc/ECsvOutputArchive.hh"

namespace efc {
namespace ezk {

class StatPersisted : public ERecord {
public:
	llong czxid;
	llong mzxid;
	llong ctime;
	llong mtime;
	int version;
	int cversion;
	int aversion;
	llong ephemeralOwner;
	llong pzxid;

	StatPersisted() {
	}
	StatPersisted(llong czxid, llong mzxid, llong ctime, llong mtime,
			int version, int cversion, int aversion, llong ephemeralOwner,
			llong pzxid) {
		this->czxid = czxid;
		this->mzxid = mzxid;
		this->ctime = ctime;
		this->mtime = mtime;
		this->version = version;
		this->cversion = cversion;
		this->aversion = aversion;
		this->ephemeralOwner = ephemeralOwner;
		this->pzxid = pzxid;
	}
	llong getCzxid() {
		return czxid;
	}
	void setCzxid(llong m_) {
		czxid = m_;
	}
	llong getMzxid() {
		return mzxid;
	}
	void setMzxid(llong m_) {
		mzxid = m_;
	}
	llong getCtime() {
		return ctime;
	}
	void setCtime(llong m_) {
		ctime = m_;
	}
	llong getMtime() {
		return mtime;
	}
	void setMtime(llong m_) {
		mtime = m_;
	}
	int getVersion() {
		return version;
	}
	void setVersion(int m_) {
		version = m_;
	}
	int getCversion() {
		return cversion;
	}
	void setCversion(int m_) {
		cversion = m_;
	}
	int getAversion() {
		return aversion;
	}
	void setAversion(int m_) {
		aversion = m_;
	}
	llong getEphemeralOwner() {
		return ephemeralOwner;
	}
	void setEphemeralOwner(llong m_) {
		ephemeralOwner = m_;
	}
	llong getPzxid() {
		return pzxid;
	}
	void setPzxid(llong m_) {
		pzxid = m_;
	}
	virtual void serialize(EOutputArchive* a_, const char* tag) THROWS(EIOException) {
		a_->startRecord(this,tag);
		a_->writeLLong(czxid,"czxid");
		a_->writeLLong(mzxid,"mzxid");
		a_->writeLLong(ctime,"ctime");
		a_->writeLLong(mtime,"mtime");
		a_->writeInt(version,"version");
		a_->writeInt(cversion,"cversion");
		a_->writeInt(aversion,"aversion");
		a_->writeLLong(ephemeralOwner,"ephemeralOwner");
		a_->writeLLong(pzxid,"pzxid");
		a_->endRecord(this,tag);
	}
	virtual void deserialize(EInputArchive* a_, const char* tag) THROWS(EIOException) {
		a_->startRecord(tag);
		czxid=a_->readLLong("czxid");
		mzxid=a_->readLLong("mzxid");
		ctime=a_->readLLong("ctime");
		mtime=a_->readLLong("mtime");
		version=a_->readInt("version");
		cversion=a_->readInt("cversion");
		aversion=a_->readInt("aversion");
		ephemeralOwner=a_->readLLong("ephemeralOwner");
		pzxid=a_->readLLong("pzxid");
		a_->endRecord(tag);
	}
	virtual EString toString() {
		try {
			EByteArrayOutputStream s;
			ECsvOutputArchive a_(&s);
			a_.startRecord(this, "");
			a_.writeLLong(czxid, "czxid");
			a_.writeLLong(mzxid, "mzxid");
			a_.writeLLong(ctime, "ctime");
			a_.writeLLong(mtime, "mtime");
			a_.writeInt(version, "version");
			a_.writeInt(cversion, "cversion");
			a_.writeInt(aversion, "aversion");
			a_.writeLLong(ephemeralOwner, "ephemeralOwner");
			a_.writeLLong(pzxid, "pzxid");
			a_.endRecord(this, "");
			s.write('\0');
			return (char*) s.data();
		} catch (EThrowable& ex) {
			ex.printStackTrace();
		}
		return "ERROR";
	}
	void write(EDataOutput* out) THROWS(EIOException) {
		EBinaryOutputArchive archive(out);
		serialize(&archive, "");
	}
	void readFields(EDataInput* in) THROWS(EIOException) {
		EBinaryInputArchive archive(in);
		deserialize(&archive, "");
	}
	virtual int compareTo(EObject* peer_) THROWS(EClassCastException) {
		StatPersisted* peer = dynamic_cast<StatPersisted*>(peer_);
		if (!peer) {
			throw EClassCastException(__FILE__, __LINE__,
					"Comparing different types of records.");
		}
		int ret = 0;
		ret = (czxid == peer->czxid)? 0 :((czxid<peer->czxid)?-1:1);
		if (ret != 0) return ret;
		ret = (mzxid == peer->mzxid)? 0 :((mzxid<peer->mzxid)?-1:1);
		if (ret != 0) return ret;
		ret = (ctime == peer->ctime)? 0 :((ctime<peer->ctime)?-1:1);
		if (ret != 0) return ret;
		ret = (mtime == peer->mtime)? 0 :((mtime<peer->mtime)?-1:1);
		if (ret != 0) return ret;
		ret = (version == peer->version)? 0 :((version<peer->version)?-1:1);
		if (ret != 0) return ret;
		ret = (cversion == peer->cversion)? 0 :((cversion<peer->cversion)?-1:1);
		if (ret != 0) return ret;
		ret = (aversion == peer->aversion)? 0 :((aversion<peer->aversion)?-1:1);
		if (ret != 0) return ret;
		ret = (ephemeralOwner == peer->ephemeralOwner)? 0 :((ephemeralOwner<peer->ephemeralOwner)?-1:1);
		if (ret != 0) return ret;
		ret = (pzxid == peer->pzxid)? 0 :((pzxid<peer->pzxid)?-1:1);
		if (ret != 0) return ret;
		return ret;
	}
	virtual boolean equals(EObject* peer_) {
		StatPersisted* peer = dynamic_cast<StatPersisted*>(peer_);
		if (!peer) {
			return false;
		}
		if (peer_ == this) {
			return true;
		}
		boolean ret = false;
		ret = (czxid == peer->czxid);
		if (!ret)
			return ret;
		ret = (mzxid == peer->mzxid);
		if (!ret)
			return ret;
		ret = (ctime == peer->ctime);
		if (!ret)
			return ret;
		ret = (mtime == peer->mtime);
		if (!ret)
			return ret;
		ret = (version == peer->version);
		if (!ret)
			return ret;
		ret = (cversion == peer->cversion);
		if (!ret)
			return ret;
		ret = (aversion == peer->aversion);
		if (!ret)
			return ret;
		ret = (ephemeralOwner == peer->ephemeralOwner);
		if (!ret)
			return ret;
		ret = (pzxid == peer->pzxid);
		if (!ret)
			return ret;
		return ret;
	}
	virtual int hashCode() {
		int result = 17;
		int ret;
		ret = (int) (czxid^(((ullong)czxid)>>32));
		result = 37 * result + ret;
		ret = (int) (mzxid^(((ullong)mzxid)>>32));
		result = 37 * result + ret;
		ret = (int) (ctime^(((ullong)ctime)>>32));
		result = 37 * result + ret;
		ret = (int) (mtime^(((ullong)mtime)>>32));
		result = 37 * result + ret;
		ret = (int) version;
		result = 37 * result + ret;
		ret = (int) cversion;
		result = 37 * result + ret;
		ret = (int) aversion;
		result = 37 * result + ret;
		ret = (int) (ephemeralOwner^(((ullong)ephemeralOwner)>>32));
		result = 37 * result + ret;
		ret = (int) (pzxid^(((ullong)pzxid)>>32));
		result = 37 * result + ret;
		return result;
	}
	static EString signature() {
		return "LStatPersisted(lllliiill)";
	}
};

} /* namespace ezk */
} /* namespace efc */
#endif /* STATPERSISTED_HH_ */
