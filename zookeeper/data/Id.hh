// File generated by hadoop record compiler. Do not edit.

#ifndef ID_HH_
#define ID_HH_

#include "Efc.hh"
#include "../../jute/inc/ERecord.hh"
#include "../../jute/inc/EBinaryInputArchive.hh"
#include "../../jute/inc/EBinaryOutputArchive.hh"
#include "../../jute/inc/ECsvOutputArchive.hh"

namespace efc {
namespace ezk {

class Id: public ERecord {
public:
	EString scheme;
	EString id;

	Id() {
	}
	Id(EString scheme, EString id) {
		this->scheme = scheme;
		this->id = id;
	}
	EString getScheme() {
		return scheme;
	}
	void setScheme(EString m_) {
		scheme = m_;
	}
	EString getId() {
		return id;
	}
	void setId(EString m_) {
		id = m_;
	}
	virtual void serialize(EOutputArchive* a_, const char* tag) THROWS(EIOException) {
		a_->startRecord(this, tag);
		a_->writeString(scheme, "scheme");
		a_->writeString(id, "id");
		a_->endRecord(this, tag);
	}
	virtual void deserialize(EInputArchive* a_, const char* tag) THROWS(EIOException) {
		a_->startRecord(tag);
		scheme = a_->readString("scheme");
		id = a_->readString("id");
		a_->endRecord(tag);
	}
	virtual EString toString() {
		try {
			EByteArrayOutputStream s;
			ECsvOutputArchive a_(&s);
			a_.startRecord(this, "");
			a_.writeString(scheme, "scheme");
			a_.writeString(id, "id");
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
		Id* peer = dynamic_cast<Id*>(peer_);
		if (!peer) {
			throw EClassCastException(__FILE__, __LINE__,
					"Comparing different types of records.");
		}
		int ret = 0;
		ret = scheme.compareTo(&peer->scheme);
		if (ret != 0)
			return ret;
		ret = id.compareTo(&peer->id);
		if (ret != 0)
			return ret;
		return ret;
	}
	virtual boolean equals(EObject* peer_) {
		Id* peer = dynamic_cast<Id*>(peer_);
		if (!peer) {
			return false;
		}
		if (peer_ == this) {
			return true;
		}
		boolean ret = false;
		ret = scheme.equals(&peer->scheme);
		if (!ret)
			return ret;
		ret = id.equals(&peer->id);
		if (!ret)
			return ret;
		return ret;
	}
	virtual int hashCode() {
		int result = 17;
		int ret;
		ret = scheme.hashCode();
		result = 37 * result + ret;
		ret = id.hashCode();
		result = 37 * result + ret;
		return result;
	}
	static EString signature() {
		return "LId(ss)";
	}
};

} /* namespace ezk */
} /* namespace efc */
#endif /* ID_HH_ */